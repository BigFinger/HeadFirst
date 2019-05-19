package event;

import interfaces.Context;
import interfaces.Event;
import interfaces.Handler;
import interfaces.TestHandler;

public class TestEvent extends Event {

    public TestEvent() {}

    public TestEvent(Context context) {this.context = context;}

    @Override
    public Class<? extends Handler> getHandlerType() {return TestHandler.class;}
}
