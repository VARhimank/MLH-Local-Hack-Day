#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

void mp();
void intro();
void threat();
void save();

void intro()
{
	clrscr();
	cout<<"The blue shark (Prionace glauca) is a species of requiem shark, in the family Carcharhinidae, that inhabits deep waters in the world's temperate and tropical oceans. Averaging around 3.1 m (10 ft) and preferring cooler waters, the blue shark migrates long distances, such as from New England to South America. It is listed as Near Threatened by the IUCN."<<endl<<"Although generally lethargic, they can move very quickly. Blue sharks are viviparous and are noted for large litters of 25 to over 100 pups. They feed primarily on small fish and squid, although they can take larger prey. Maximum lifespan is still unknown, but it is believed that they can live up to 20 years."<<endl<<endl
		<<"Status: Near Threatened...About 20 million blue sharks are caught globally each year"<<endl
		<<"Type: Fish"<<endl
		<<"Location: One of the most widespread larger animals on the planet, found in all temperate and tropical seas."<<endl
		<<"Size: Mature at around 2.2m, females are usually bigger, and can grow up to 3.8m in length."<<endl
		<<"Habitat: Coastal and oceanic seas, ranging from surface waters to 600m in depth."<<endl;
	cout<<endl<<"Go back to main page ? Press 1 for YES ans 0 to EXIT"<<endl<<"Ans: ";
	int x;cin>>x;
	if(x==1){mp();}
	else if (x==0){exit(0);}
}

void threat()
{
	clrscr();
	cout<<"Blue sharks are large and powerful apex predators, so what do they have to be afraid of? Similar to many aquatic species, the blue shark is vulnerable to various different natural predators when it is in its juvenile stages, when they are a bit more snack-sized. Additionally, there are some that claim orcas also feed on mature blue sharks, but the most commonly used report in this claim was unable to specify what exact species of shark it was... so the jury is still out."<<endl<<endl<<"The largest threat to the adult blue shark is, you guessed it, humans. Blue sharks are under threat from intentional harvest, sport fishing, and from by-catch, organisms that are caught and killed accidentally when humans fish for another species. However, sport fishing is likely the lesser of these threats as shark catch-and-release survival rates have shown to be upwards of 90% in some sharks. Additionally, there have been restrictions put on the harvest of blue sharks , but they are still harvested in much of the world for their meat, primarily their fins."<<endl;
	cout<<endl<<"Go back to main page ? Press 1 for YES ans 0 to EXIT"<<endl<<"Ans: ";
	int x;cin>>x;
	if(x==1){mp();}
	else if (x==0){exit(0);}
}

void save()
{
	clrscr();
	cout<<"First off, increasing education about sharks and their importance to our oceans is key to increasing support for their protection. We can also increase shark protection by advocating for government officials and parties to implement policy that allows for sustainable harvest and trade of sharks in their waters. Additionally, joining conservation organizations such as Shark Defenders can help to show support for sharks and help to spread education for shark protection awareness."<<endl<<"Social media is a powerful tool to spread awareness about sharks and shark conservation. So the next time you read an interesting article or blog post about sharks, share it with your network."<<endl<<endl<<"Some Links where you can read more:-"<<endl<<"1. Shark Savers ( https://wildaid.org/shark-savers/ )"<<endl<<"2. Shark Angel ( https://sharkangels.org/what-we-do )"<<endl<<"3. SharkLife ( https://www.sharklife.co.za/ )"<<endl;
	cout<<endl<<"Go back to main page ? Press 1 for YES ans 0 to EXIT"<<endl<<"Ans: ";
	int x;cin>>x;
	if(x==1){mp();}
	else if (x==0){exit(0);}
}

void mp()
{
   clrscr();
   cout<<"Welcome to Save the Blahajs(Blue Sharks) !"<<endl<<"___________________"<<endl;
   cout<<endl<<"We aim to educate people about importance, threats and ways to save blue sharks.This motive was really required as this species does not meet the criteria of being vulnerable, or worse; however, with the current available data and population trends it is likely to be moved into a worse category in a short amount of time. We should take some initiative already before the situation goes to worse.";
   int a;cout<<"Enter one of the following numbers :"<<endl
   			 <<"1. To read Introduction about Blue sharks"<<endl
   			 <<"2. To read about Threats to Blue sharks"<<endl
   			 <<"3. To Read ways to Help and Save Blue sharks"<<endl
   			 <<"4. To exit";
   cout<<endl<<"Answer : ";cin>>a;
   switch(a)
   {
   	case 1: intro();
   			break;
   	case 2: save();
   			break;
   	case 3: threat();
   			break;
   	case 4: exit(0);
   }
}

void main()
{	
	clrscr();
	mp();
	getch();
}