#include <iostream>

using namespace std;

int main()

{
       
int choice,clochoice,clochoice1,foodch,
pizza,pizzacount,coffee,movie,no;
string clothes,type,colour,size,address,s,timing,name,day;
    
one:
cout << "========================================================" << "\n \n \n \n";
    
cout << "           WELCOME TO MALL FOR ALL\n";
cout << "            How can I help you?          " << "\n \n \n";
    
cout << "Press 1: To look in clothing \n";
    
cout << "Press 2: To order food from FOODMART\n";
    
cout << "Press 3: To book movie tickets \n\n\n";
  
    
cin >> choice;
    
switch (choice)
    
{
        
case 1:
 
two:       
cout << "Select Gender \n";
        
cout << "Press 1 for Mens\n";
        
cout << "Press 2 for Womens\n";
        
cout << "Press 3 to go back\n";
cin >> clochoice;
        
if(clochoice==1)
        
{
            
a:
cout << "We Got a wide range of Clothes for Men \n";
            
cout << "Press 1 : for Topwear\n";
            
cout << "Press 2 : for Bottomwear\n";
            
cout << "Press 3 : for Sleepwear\n";
            
cout << "Press 4 : for Festive Season Clothing(Indian Style)\n";

cout << "Press 5 : to go back\n";           
cin >> clochoice1;
            
if(clochoice1 == 1)
            
{
                
cout << "In Topwear we have Fab Fashion exclusive Shirts, Denim Shirts \n Please let us what kind of Topwear you're interseted in.\n ";
               
cout << "Please Enter the Topwear Type you're searching for\n";
                
cin >> type;
                
cout << "Tell us Colour of"<< type<<"\n";
               
cin >> colour;
                
cout << "Size which fits you the best (S,M,L,XL,XXL,XXXL)\n";
                
cin >> size;
                
cout << "Wonderful! We have got some of handpicked "<<type<<" as per the details provided by you \n";
                
cout << "We'll send you all the "<<type<<" to your address where you can have trials and can choose the perfect "<<type<<" that suits you\n Please give us your detailed address\n";
               
cin >> address;
                
cout << "THANK YOU FOR CHOOSING US!\n";
                
cout << "We'll send the best possible "<< type <<" to the provided address\n";
            
}
            
if(clochoice1==2)
            
{
                
cout << "In Bottomwear we have Fab Fashion exclusive Jeans, Pants (Formal/Informal) \n Please let us what kind of Bottomwear you're interseted in.\n ";
                
cout << "Please Enter the Bottomwear Type you're searching for\n";
                
cin >> type;
                
cout << "Tell us Colour of"<< type<<"\n";
                
cin >> colour;
                
cout << "Tell us the size fits you the best (S,M,L,XL,XXL,XXXL)\n";
                
cin >> size;
               
cout << "Wonderful! We have got some of handpicked "<<type<<" as per the details provided by you \n";
                
cout << "We'll send you all the "<<type<<" to your address where you can have trials and can choose the perfect "<<type<<" that suits you\n Please give us your detailed address\n";
                
cin >> address;
                
cout << "THANK YOU FOR CHOOSING US!\n";
                
cout << "We'll send the best possible "<< type <<" to the provided address";
            
}
            
if(clochoice1==3)
            
{
                
cout << "In Sleepwear we have Fab Fashion exclusive Night suits \n Please let us what kind of Sleepwear you're interseted in.\n ";
                
cout << "Please Enter the Sleepwear Type you're searching for\n";
                
cin >> type;
                
cout << "Tell us Colour of"<< type<<"\n";
                
cin >> colour;
                
cout << "Size which fits you the best (S,M,L,XL,XXL,XXXL)\n";
                
cin >> size;
                
cout << "Wonderful! We have got some of handpicked "<<type<<" as per the details provided by you \n";
                
cout << "We'll send you all the "<<type<<" to your address where you can have trials and can choose the perfect "<<type<<" that suits you\n Please give us your detailed address\n";
                
cin >> address;
                
cout << "THANK YOU FOR CHOOSING US!\n";
                
cout << "We'll send the best possible "<< type <<" to the provided address\n";
            
}
            
if(clochoice1==4)
            
{
                
cout << "In Festive wear we have Fab Fashion exclusive Kurtas,Jhabbas and many more \n Please let us what kind of Topwear you're interseted in.\n ";
                
cout << "Please Enter the Festive wear Type you're searching for\n";
                
cin >> type;
                
cout << "Tell us Colour of"<< type<<"\n";
                
cin >> colour;
                
cout << "Size which fits you the best (S,M,L,XL,XXL,XXXL)\n";
                
cin >> size;
                
cout << "Wonderful! We have got some of handpicked "<<type<<" as per the details provided by you \n";
                
cout << "We'll send you all the "<<type<<" to your address where you can have trials and can choose the perfect "<<type<<" that suits you\n Please give us your detailed address\n";
                
cin >> address;
                
cout << "THANK YOU FOR CHOOSING US!\n";
                
cout << "We'll send the best possible "<< type <<" to the provided address\n";
            
}
            
if ( clochoice == 5)
{
goto two;
}
if(clochoice1<0 || clochoice1>5)
 {
  cout<<"OOPS! Something went wrong.\n";
  goto a;
 }       
}
        
if(clochoice==2)
        
{

b:            
cout << "We Got a wide range of Clothes for Womens \n";
            
cout << "Press 1 : for Topwear\n";
            
cout << "Press 2 : for Bottomwear\n";
            
cout << "Press 3 : for Sleepwear\n";
            
cout << "Press 4 : for Festive Season Clothing(Indian Style)\n";

cout << "Press 5 : for going back\n";            
cin >> clochoice1;
            
if(clochoice1 == 1)
            
{
                
cout << "In Topwear we have Fab Fashion exclusive Shirts, Denim Shirts for women \n Please let us what kind of Topwear you're interseted in.\n ";
                
cout << "Please Enter the Topwear Type you're searching for\n";
                
cin >> type;
                
cout << "Tell us Colour of"<< type<<"\n";
                
cin >> colour;
                
cout << "Size which fits you the best (S,M,L,XL,XXL,XXXL)\n";
                
cin >> size;
                
cout << "Wonderful! We have got some of handpicked "<<type<<" as per the details provided by you \n";
                
cout << "We'll send you all the "<<type<<" to your address where you can have trials and can choose the perfect "<<type<<" that suits you\n Please give us your detailed address\n";
                
cin >> address;
                
cout << "THANK YOU FOR CHOOSING US!\n";
                
cout << "We'll send the best possible "<< type <<" to the provided address\n";
            
}
            
if(clochoice1==2)
            
{
                
cout << "In Bottomwear we have Fab Fashion exclusive Jeans, Pants (Formal/Informal) \n Please let us what kind of Bottomwear you're interseted in.\n ";
                
cout << "Please Enter the Bottomwear Type you're searching for\n";
                
cin >> type;
                
cout << "Tell us Colour of"<< type<<"\n";
                
cin >> colour;
                
cout << "Tell us the size fits you the best (S,M,L,XL,XXL,XXXL)\n";
                
cin >> size;
                
cout << "Wonderful! We have got some of handpicked "<<type<<" as per the details provided by you \n";
                
cout << "We'll send you all the "<<type<<" to your address where you can have trials and can choose the perfect "<<type<<" that suits you\n Please give us your detailed address\n";
                
cin >> address;
                
cout << "THANK YOU FOR CHOOSING US!\n";
                
cout << "We'll send the best possible "<< type <<" to the provided address\n";
            
}
            
if(clochoice1==3)
            
{
                
cout << "In Sleepwear we have Fab Fashion exclusive Night suits \n Please let us what kind of Sleepwear you're interseted in.\n ";
                
cout << "Please Enter the Sleepwear Type you're searching for\n";
                
cin >> type;
                
cout << "Tell us Colour of"<< type<<"\n";
                
cin >> colour;
                
cout << "Size which fits you the best (S,M,L,XL,XXL,XXXL)\n";
                
cin >> size;
                
cout << "Wonderful! We have got some of handpicked "<<type<<" as per the details provided by you \n";
                
cout << "We'll send you all the "<<type<<" to your address where you can have trials and can choose the perfect "<<type<<" that suits you\n Please give us your detailed address\n";
                
cin >> address;
                
cout << "THANK YOU FOR CHOOSING US!\n";
                
cout << "We'll send the best possible "<< type <<" to the provided address\n";
            
}
            
if(clochoice1==4)
            
{
                
cout << "In Festive wear we have Fab Fashion exclusive Kurtis and many more \n Please let us what kind of Topwear you're interseted in.\n ";
                
cout << "Please Enter the Festive wear Type you're searching for\n";
                
cin >> type;
                
cout << "Tell us Colour of"<< type<<"\n";
               
cin >> colour;
                
cout << "Size which fits you the best (S,M,L,XL,XXL,XXXL)\n";
                
cin >> size;
                
cout << "Wonderful! We have got some of handpicked "<<type<<" as per the details provided by you \n";
               
cout << "We'll send you all the "<<type<<" to your address where you can have trials and can choose the perfect "<<type<<" that suits you\n Please give us your detailed address\n";
                
cin >> address;
                
cout << "THANK YOU FOR CHOOSING US!\n";
                
cout << "We'll send the best possible "<< type <<" to the provided address";
            
}
  
if ( clochoice == 5)
{
goto two;
}
          
 if(clochoice1<0 || clochoice1>5)
 {
  cout<<"OOPS! Something went wrong.\n";
  goto b;
 }
        
}

if(clochoice==3)
{
goto one;
}
if(clochoice<0 && clochoice>3)
 {
   cout<<"OOPS! something went wrong\n";
   goto two;
 }       
break;
        
        

case 2:
 
food:       
cout << "******** Welcome To the FOODMART ********\n";
        
cout << "FOODMART IS FAST FOOD UNDER ONE ROOF\n";

cout << "SELECT FOOD YOU WANT\n";        
cout <<
 "PRESS 1 - YOLO PIZZAS\n";
cout << "PRESS 2 - Irani Cafe\n";  
cout << "PRESS 3 FOR GOING BACK\n";        
            
            
            
cin >> foodch;
if(foodch == 1)
{
  piz:
  cout << "WELCOME TO YOLO PIZZAS\n";
  cout << "SELECT PIZZAS FROM OPTIONS GIVEN BELOW:\n";
  cout << "PRESS 1 TO ORDER CLASSIC MARGHERITA (serves 3 people)\n";
  cout << "PRESS 2 TO ORDER CHICKEN PIZZA (serves 4 people)\n";
  cout << "PRESS 3 TO ORDER PANEER PIZZA (YOLO PIZZAS special)\n";
  cout << "PRESS 4 TO ORDER PEPPER BBQ PIZZA (serves 3 people) \n";
  cout << "PRESS 5 TO GO BACK";
  cin >> pizza;
  if(pizza<=4 && pizza>=1)
  {
  cout << "Tell us your name\n";
  cin >> name;
  cout << "HOLA! It's our 10th anniversary. We got a special offer for you. Buy any pizza just at 100 INR each\n";
  cout << "How many pizza do you want?\n";
  cin >> pizzacount;
  cout << "Please let us know your detailed address\n";
  cin >> address;
  cout << "THANK YOU\n";
  cout << "Your pizza is on the way!\n";
  cout << "Address : "<< address;
  cout << "YOUR GRAND TOTAL IS : "<<pizzacount*100<<" INR";
  }
  if(pizza == 5)
  {
  goto food;
  }
  if(pizza<1 || pizza>5)
  {
   cout<< "OOPS! we out of your order! Try out the ones we have\n";
   goto piz;
  }
}
if(foodch == 2)
{
  caf:
  cout << "WELCOME TO IRANI CAFE\n";
  cout << "WHAT WOULD LIKE TO ORDER\n";
  cout << "PRESS 1 CAFFE MISTO(150ml)\n";
  cout << "PRESS 2 BLONDE ROAST(150ml)\n";
  cout << "PRESS 3 DARK ROAST(150ml)\n";
  cout << "PRESS 4 CAFFE AMERICANO(150ml)\n";
  cin >> coffee;
  if(coffee>=1 && coffee<=4)
  {
  cout << "Tell us your name\n";
  cin >> name;
  cout << "Please let us know your address\n";
  cin >> address;
  cout << "HOLA!It's our 10th Anniversary so we have an Offer on all our cafes 120/- per drink\n";
  cout << "How many people to serve?\n";
  cin >> pizzacount;
  cout << "THANK YOU! "<<name<<" Your coffee is on the way.\n";
  cout << "Your grand total bill costs you "<<pizzacount*120<<" INR\n ";
  }
  else
  {
   cout<< "OOPS! we out of your order! Try out the ones we have\n";
   goto caf;
  }
}
if(foodch == 3)
{
goto one;
}
break;

case 3:
three:
cout << "WELCOME TO CINEPOLIS [CHENNAI] \n";
cout << "HOLA! It's our 10th anniversary. Enjoy all movies only at 110 INR\n per show";
cout << "SELECT THE MOVIE\n";
cout << "PRESS 1 FOR Panipat\n";
cout << "PRESS 2 FOR BALA\n";
cout << "PRESS 3 FOR PAGALPANTI\n";
cout << "PRESS 4 FOR HOUSEFULL 4\n";
cout << "PRESS 5 TO GO BACK\n";
cin >> movie;
if(movie<0 && movie>5)
{
cout << "Please tell your name\n";
cin >> name;
cout<< "When are you looking out to watch the movie?\n";
cin >> day;
cout << "CHOOSE TIMINGS (9:30, 10:15, 2:30, 7:00, 9:30)\n";
cin >> timing;
cout << "Tell us how many seats to be reserved\n";
cin >> no;
if(movie==1)
{
cout<<no<<" tickets have been booked for you at "<<timing<<" for Panipat Movie! THANK YOU!\n";
cout << "Your bill is "<<no*110;
}
if(movie==2)
{
cout<<no<<" tickets have been booked for you at "<<timing<<" for BALA Movie! THANK YOU!\n";
cout << "Your bill is "<<no*110;
}
if(movie==3)
{
cout<<no<<" tickets have been booked for you at "<<timing<<" for PAGALPANTI Movie! THANK YOU!\n";
cout << "Your bill is "<<no*110;
}
if(movie==4)
{
cout<<no<<" tickets have been booked for you at "<<timing<<" for HOUSEFULL 4 Movie! THANK YOU!\n";
cout << "Your bill is "<<no*110;
}
}
if(movie==5)
{
goto one;
}
if(movie<0 && movie>4)
{
cout << "Your choice is currently Unavailable! Check out the ones we have\n";
goto three;
}
break;

default:
cout<<"OOPS! SOMETHING WENT WRONG.. PLEASE TRY AGAIN\n";
goto one;
break;

}
   
return 0;

}
