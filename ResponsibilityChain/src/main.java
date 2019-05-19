import context.TestContext;
import event.TestEvent;

public class main {

    public static void main(String args[]) {
        TestEvent event = new TestEvent(new TestContext());
        HandlerChain handlerChain = new HandlerChain();
        handlerChain.init();
        handlerChain.publish(event);
    }
}
