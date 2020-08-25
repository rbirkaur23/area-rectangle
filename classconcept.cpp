#include<iostream.h>
#include<conio.h>
class rectangle
{
  private:
    int a,b;
  public:
    void input(int p,int r)
    {
      a=p;
      b=r;
    }
    void calarea()
    {
      int area=a*b;
      cout<<"Area of rectangle = "<<area;
    }
};
int main()
{
  clrscr();
  rectangle ans;
  ans.input(4,8);
  ans.area();
  getch();
  return 0;
}
