package handler;

import consts.TestHandlerConsts;
import context.TestContext;
import interfaces.Context;
import interfaces.TestHandler;

public class PrepareHandler implements TestHandler {

    @Override
    public void process(Context context) {
        TestContext testContext = (TestContext)context;
        testContext.setPrepare("This is prepare Handler");
    }

    @Override
    public int getOrder() {return TestHandlerConsts.TEST_HANDLER;}

    @Override
    public void rollback(Exception e, Context context) {}

}
