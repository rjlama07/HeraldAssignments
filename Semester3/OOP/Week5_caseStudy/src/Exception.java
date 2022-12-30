
class UserNotFound extends RuntimeException{
    public UserNotFound(String e)
    {
        super(e);
    }
}
class  InputMissMatchException extends  RuntimeException{
    public InputMissMatchException(String e)
    {
        super(e);
    }
}