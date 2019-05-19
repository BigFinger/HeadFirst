package interfaces;

public abstract class Event {

    protected Context context;

    public Context getContext() {return context;}

    public void setContext(Context context) {this.context = context;}

    public abstract Class<? extends Handler> getHandlerType();

}
