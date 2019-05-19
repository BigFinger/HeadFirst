package handler;

import consts.TestHandlerConsts;
import context.TestContext;
import interfaces.Context;
import interfaces.TestHandler;

public class FinishHandler implements TestHandler {

    @Override
    public void process(Context context) {
        TestContext testContext = (TestContext)context;
        testContext.setFinish(testContext.getPrepare() + " and This is finish Handler");
        System.out.println(testContext.getFinish());
    }

    @Override
    public int getOrder() {return TestHandlerConsts.FINISH_HANDLER;}

    @Override
    public void rollback(Exception e, Context context) {}
}
