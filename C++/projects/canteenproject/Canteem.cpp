#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<unistd.h>
#include<windows.h>
#include<cstdlib>


using namespace std;
int rn=0;
int feed;
char reach;
char str1[50];


void cls(){
system("color 0E");
system("cls");
 
}
void cls1(){
system("color 0E");
system("cls");
 
}

void loadingbar(void){
 
for (int i=15;i<=100;i+=5){

cls();
printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t  %d %% Loading...\n\n\t\t",i);
printf("\t\t\t\t ");
for (int j=0; j<i;j+=2){
printf(" ");

 
}
//Sleep(100);
//if(i==90 || i==50 || i==96 || i==83){
//Sleep(100);
//                          .
}

} 

class one
{
	
     
public:
	void menu1();
	
};
void one::menu1()
{
	cls1();
		cout<<"\n\n\n\t\t\t\t\t\t ========== WELCOME TO ZOMATO  =========="<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t  =====TODAY'S MENU====="<<endl;
	cout<<"\n\n\n\t======== chinese ==========\t\t\t===== south indian =======\t\t\t\t======== fast food ========"<<endl;
	cout<<"\n\n\n\t===========================\t\t\t==========================\t\t\t\t==========================="<<endl;
	cout<<"\t[1] Veggie Supreme (Rs.480)\t\t\t[2] Plan Dosa(Rs.440)\t\t\t\t\t[3] Chicken Sizzler (Rs.580)\n\t[4] Veg Roll (Rs.520)\t\t\t\t[5] Masala Dosa (Rs.350)\t\t\t\t[6] Country Feast (Rs.400)\n\t[7] Manchurian (Rs.420)\t\t\t\t[8] idli (Rs.540)\t\t\t\t\t[9] Makizushi (Rs.548)\n\t[10] Fried Rice (Rs.390)\t\t\t[11] Sambhar Vada (Rs.525)\t\t\t\t[12] Fish 'n' Chips (Rs.425)\n\t[13] Noodles (Rs.335)\t\t\t\t[14] Upma (Rs.324)\t\t\t\t\t[15] Hot Dog (Rs.360)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[16] EXIT"<<endl;
 cout<<"\n\t======================================================================================================================================="<<endl;
}
	class two:public one
	{
	protected:
		 int  pizza,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s=0;
     string y,ye;
     public:
void menu2()
{    ofstream write;
write.open("order.text",ios::app);
if(!write)
{
	cout<<"file can not open"<<endl;
	exit (-1);
}

   a:
   	b:
   		c:
   	 cout<<"\n\n\tENTER YOUR ORDER (one order at a time): "; 
      cin>>ch;
    
      
  cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";
 
  cin>>ye;
 
  if(ye=="y"|| ye=="Y")
  {
  	goto b;
  }
  else
  {
   switch(ch)
   {
   	case 1:
   			cout<<"\n\n\tHOW MANY VEGGIE SUPREME YOU WANT :";
   		cin>>pizza;
   		a=480;
   		s=s+a*pizza;
   		write<<"YOU ORDER  Veggie Supreme : 480";
   		write<<" \n";
   		write<<"NUMBER OF veggie supreme IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Veggie Supreme "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 2:
   		cout<<"\n\n\tHOW MANY PLAN DOSA YOU WANT :";
   		cin>>pizza;
   		
		   b=440;
   		s=s+b*pizza;
   		write<<"YOU ORDER  Plan Dosa : 440";
   		write<<" \n";
   			write<<"NUMBER OF Plan Dosa : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Plan Dosa "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 3:
   		cout<<"\n\n\tHOW MANY CHICKEN SIZZLER YOU WANT :";
   		cin>>pizza;
   	
   		c=580;
   		s=s+c*pizza;
   			write<<"YOU ORDER  Chicken Sizzler : 580";
   			write<<" \n";
   				write<<"NUMBER OF Chicken Sizzler IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Chicken Sizzler "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 4:
   		cout<<"\n\n\tHOW MANY VEG ROLL YOU WANT :";
   		cin>>pizza;
   	
   		d=520;
   		s=s+d*pizza;
   		write<<"YOU ORDER  Veg Roll : 520";
   	write<<" \n";
   		write<<"NUMBER OF Veg Roll IS : "<<pizza;
   		write<<"\n";
	   cout<<"\n\n\n\tYOU ORDER  Veg Roll "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 5:
   		cout<<"\n\n\tHOW MANY MASALA DOSA YOU WANT:";
   		cin>>pizza;
   	
   		e=350;
   		s=s+e*pizza;
   		write<<"YOU ORDER  Masala Dosa : 350";
   		write<<" \n";
   			write<<"NUMBER OF Masala Dosa IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Masala Dosa  "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 6:
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT:";
   		cin>>pizza;
   	
   		f=400;
   		s=s+f*pizza;
   		write<<"YOU ORDER Country Feast : 400";
   		write<<"\n ";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Country Feast "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 7:
   		cout<<"\n\n\tHOW MANCHURIAN YOU WANT:";
   		cin>>pizza;
   	
   		g=420;
   		s=s+g*pizza;
   		write<<"YOU ORDER Manchurian : 420";
   		write<<"\n ";
   			write<<"NUMBER OF Manchurian  : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Manchurian "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 8:
   		cout<<"\n\n\tHOW MANY IDLI YOU WANT :";
   		cin>>pizza;
   	
   		h=540;
   		s=s+h*pizza;
   		write<<"YOU ORDER IDLI : 540";
   		write<<" \n";
   			write<<"NUMBER OF IDLI IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  IDLI "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
	case 9:
	cout<<"\n\n\tHOW MANY MAKIZUSHI YOU WANT :";
   		cin>>pizza;
   	
		i=548;
		s=s+i*pizza;
		write<<"YOU ORDER Makizushi : 548";
		write<<" \n";
			write<<"NUMBER OF Makizushi IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Makizushi "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 10:
   		cout<<"\n\n\tHOW MANY FRIED RICE YOU WANT :";
   		cin>>pizza;
   	
   		j=390;
   		s=s+j*pizza;
   		write<<"YOU ORDER Fried Rice : 390";
   		write<<" \n";
   			write<<"NUMBER OF Fried Rice : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Fried Rice "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 11:
   			cout<<"\n\n\tHOW SAMBHAR VADA YOU WANT :";
   		cin>>pizza;
   	
   		k=525;
   		s=s+k*pizza;
   		write<<"YOU ORDER Sambhar Vada PLATES : 525";
   		write<<" \n";
   			write<<"NUMBER OF Sambhar Vada IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Sambhar Vada "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 12:
   		cout<<"\n\n\tHOW MANY FISH 'n' CHIPS YOU WANT :";
   		cin>>pizza;
   	
   		l=425;
   		s=s+l*pizza;
   		write<<"YOU ORDER Fish 'n' Chips : 425";
   		write<<" \n";
   			write<<"NUMBER OF Fish 'n' Chips IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Fish 'n' Chips "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 13:
   		cout<<"\n\n\tHOW MANY NOODLES YOU WANT :";
   		cin>>pizza;
   	
   		m=335;
   		s=s+m*pizza;
   		write<<"YOU ORDER  Noodles : 335";
   		write<<" \n";
   			write<<"NUMBER OF Noodles : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Noodles "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 14:
   		cout<<"\n\n\tHOW MANY UPMA PLATES YOU WANT :";
   		cin>>pizza;
   	
   		n=324;
   		s=s+n*pizza;
   		write<<"YOU ORDER Upma : 324";
   		write<<" \n";
   			write<<"NUMBER OF Upma IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Upma "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 15:
   		cout<<"\n\n\tHOW MANY HOT DOG YOU WANT :";
   		cin>>pizza;
   	
   		o=360;
   		s=s+o*pizza; //fn1353
   		write<<"YOU ORDER  Hot Dog : 360";
   		write<<"\n ";
   			write<<"NUMBER OF Hot Dog IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Hot Dog "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 16:
   	exit(0);
   	break;
   	
   	default:
   		cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
   		goto c;
   		break;
   }
   cout<<"\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
   cin>>y;
   if(y=="yes"|| y=="YES")
   {
   	goto a;
   }
   else
   {
   	cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
   	for(int a=1;a<8;a++) // Change 'a<?' to how many * you want
	{
		Sleep(500);
		cout << "...";
	}
   	cout<<"\n\t\t\t\t\t\t\t";
   	system("PAUSE");
   }
}
cls();

						cout << "\n\t\t\t\t\t\t\t ===================================================="<<endl;
						cout << "\t\t\t\t\t\t\t|               Food Ordering System                 |"<<endl;
						cout << "\t\t\t\t\t\t\t ===================================================="<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\t  Bill No : CP"<<(rn+5)<<"               Order : NB1"<<(rn+18)<<"3"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\t  Cashier :  AKASH TIWARI "<<endl;
						cout << endl;
                        cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs. : "<<s<<endl;
                        write<<"\t\t\t\t\t\t\t ";
                        write<<"\t\t\t\t\t\t\tTOTAL BILL IS : "<<s<<"\n";
                        cout<<"\n\t\t\t\t\t\t\t  YOUR ORDER WILL BE DELIVERED AT YOUR HOME IN : "<<(rn+2)<<" min\n";
                        cout<<"\n\t\t\t\t\t\t\t  YOUR PAYMENT OPTION IS :    CASH ON DELIVERY\n";
						cout << "\n\t\t\t\t\t\t\t ===================================================="<<endl;

   
  write.close();
  }
  void show1()
  {
  	menu1();
  	menu2();
  }
  
};
class three:public one,public two
{
	public:
		void total()
      {
      		long userId; 
      		
			d:	
			cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t  WELCOME TO ZOMATO ";
			cout<<"\n\t\t\t\t\t\t\t---------------------\n\n\n";
			cout<<"\n\t\t\t\t\t\t\tEnter Login Id = ";
			cin>>userId;
			cout<<"\t\t\t\t\t\t\t---------------------";
			if(userId!=2002)  
			{
				//cls();
				cout<<"\n\n\t\t\t\t\t\t\t.....Enter correct id\n";
				goto d;
			}
			else
			cout<<"\n\n\n\t\t\t\t\t\t\t verified ^_^ \n";
			z:
			string pwd="akash"; 
			string pass="";  
			char c;	
				cout<<"\n\n\n\t\t\t\t\t\t\tPassword = "; 
				p:
				c=getch();
				cout<<"*";   
				if(c!=13)
				{
					pass=pass+c;  
					goto p;
				}   
					
      			{
      			if(pass==pwd)
      			{
      				cout<<"\n\n\t\t\t\t\t\t\tAccess Granted. Welcome to ZOMATO \n\n\n";
      				system("PAUSE");
      				system("CLS");
      				show1();
				}
				else
				{
				cls();
				cout<<"\n\n\t\t\t\t\t\t\t Wrong Password\n";
				goto z;
				}
			}
		}
};
int main()
{  

   loadingbar();
   cls();
   rn=rand()%10+1;
   three ob;
   ob.total();
	cout<<"\n\n\n\t\t\t\t\t\t\tDO YOU GET THE ORDER ? (y/n)\n";
	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t";
	cin>>reach;
	if(reach=='y'){
	cout<<" RATE THE SERVICE \n ";
	exit(0);
}
	else{
		cls();
		fstream com;
		com.open("order.text",ios::app);
		cout<<"PLEASE GIVE YOUR COMPLAINT TO US  :\n";
		cout<<"1) DID NOT GET THE ORDER \n";
		cout<<"2) DELIVERY MAN IS NOT BEHAVING PROPERLY \n";
		cout<<"3) OTHER \n";
		cin>>feed;
		if(feed==1){
		com<<"DID NOT GET THE ORDER \n";
		cout<<"WE WILL SOLVE YOUR ISSUE IN 10 MIN ";
		}
		else if(feed==2){
		com<<"DELIVERY MAN IS NOT BEHAVING PROPERLY \n";
		cout<<"WE WILL SOLVE YOUR ISSUE IN 10 MIN ";
		}
		else{
		cout<<"PLEASE GO THROUGH OUR COMPLAINT BOX \n";
		cout<<"CLICK HERE - https://www.consumercomplaints.in/zomato-b115724 ";
		com<<"OTHER ISSUE TAKEN BY SITE\n";
		}
	
	
}
	

   getch();
}