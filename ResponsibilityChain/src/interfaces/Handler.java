package interfaces;

public interface Handler extends Ordered {

    void process(Context context);

    int getOrder();

    void rollback(Exception e, Context context);
}
