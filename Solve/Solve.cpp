#include"Solve.h"



void mass_output(int* a, int b)
{
    std::cout<<"Your massive is \n";
    for(int i=0;i<b;i++)
        {
         std::cout <<" "<<a[i];
        }
    std::cout<<"\n";
}



void Task1_Func(double* a,int b)
{


    for (int i=0;i<=ARR_SIZE; i++)
       {
         a[i]=rand()%100;
        std::cout<<" "<<a[i];
       }

}

void Task2_Func (int* a)
{
mass_output(a,10);
    for (int i=0;i<=10;i++)
       {
         a[i]=a[i]^1;
       }
mass_output(a,10);
}
void Task3_Func (int* a)
{
  a[0]=1;
  for(int i=1; i<=7;i++)
     {
        a[i]=a[i-1]+3;
     }
  // Let's print it

  std::cout<<"\n";
  for(int i=0; i<=7;i++)
     {
        std::cout <<" "<<a[i];
     }
  std::cout<<"\n";


}


void Task4_Func (int* a, int b)
{
   int tmp=0;
   int lenght=ARR_SIZE;
   for(int i=0;i<=ARR_SIZE;i++)
      {
         a[i]=i;
      }
   std::cout<<"ORIGINALLY ";
   mass_output(a, ARR_SIZE);
   if(b>0)
      {
       for (int j=1;j<=b;j++)
          {
           tmp=a[ARR_SIZE-1];
           for (int i=ARR_SIZE-1;i>=0;i--)
              {
                 a[i]=a[i-1];
              }
           a[0]=tmp;
          }
      }
   else
      {
      for (int j=-1;j>=b;j--)
         {
          tmp=a[0];
          for (int i=0;i<ARR_SIZE;i++)
             {
                a[i]=a[i+1];
             }
           a[ARR_SIZE-1]=tmp;
         }
      }
    std::cout<<"MODIFIED ";
    mass_output(a, ARR_SIZE);
}

bool checkmassive (int* a, int b)
{

    int j=0,k=0;
    int sum1=0,sum2=0;
    bool flag =false;
    for (int i=0;i<b; i++)
    {
        for(j=0;j<=i;j++)
          {
           sum1=sum1+a[j];
          }

        for(k=i+1;k<=b;k++)
          {
           sum2=sum2+a[k];
          }



     if (sum1==sum2)
    {
         std::cout<<"Sum1="<<sum1<<" \n";
         std::cout<<"Sum2="<<sum2<<" \n";
         std::cout<<"founded in at place after i="<<i<<"\n\n";
         flag = true;
    }
     sum1=0;
     sum2=0;
    }
    return flag;

}
