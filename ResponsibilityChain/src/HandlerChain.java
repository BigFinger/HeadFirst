import handler.FinishHandler;
import handler.PrepareHandler;
import interfaces.Context;
import interfaces.Event;
import interfaces.Handler;
import interfaces.TestHandler;

import java.util.*;

public class HandlerChain {

    private static final Map<Class<? extends Handler>, List<? extends Handler>> map = new HashMap<>();

    private List<TestHandler> testHandlers = Arrays.asList(new PrepareHandler(), new FinishHandler());

    public void init() {
        map.put(TestHandler.class, testHandlers);
    }

    public void publish(Event event) {
        List<? extends Handler> handlers = map.get(event.getHandlerType());
        Context context = event.getContext();
        Handler curHandler = null;

        try {
            for (Handler handler : handlers) {
                curHandler = handler;
                handler.process(context);
            }
        } catch (Exception e) {
            List<Handler> beforeHandlers = getReversedBeforeHandler(event, curHandler);
            for (Handler handler : beforeHandlers) {
                try {
                    handler.rollback(e, context);
                } catch (Exception ex) {
                    System.out.println("Run Error");
                }
            }
        }
    }

    public List<Handler> getReversedBeforeHandler(Event event, Handler curHandler) {
        List<? extends Handler> handlers = map.get(event.getHandlerType());
        List<Handler> beforeHandlers = new ArrayList<>();
        for (int index = handlers.indexOf(curHandler); index >= 0; index--) {
            beforeHandlers.add(handlers.get(index));
        }
        return beforeHandlers;
    }
}
