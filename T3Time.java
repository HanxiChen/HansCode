package FinalTest;
class Time
{
    private int hour;
    private int minute;
    private int second;

    public Time(int newHour, int newMinute, int newSecond)
    {
        hour = newHour;
        minute = newMinute;
        second = newSecond;
    }
    public void show()
    {
        System.out.println("现在是" + hour + "时" + minute + "分" + second + "秒");
    }
}
public class T3Time {
    public static void main(String[] args)
    {
        Time t1 = new Time(12,12,12);
        t1.show();
    }
}
