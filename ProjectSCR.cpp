#include<iostream>
using namespace std;

struct Node{
	int rollno;
	string name;
	string father_name;
	string program;
	int Year;
	int l_Year;
	string phone;
	string fee_status;
	string email;
	
	Node *next;
};

class Student{
	private:
		Node *Head = NULL;
		int tem;
	public:
		
		Student()
		{
			tem = 0;
		}
		
		// ------------------------> ADD FUNCTION STARTS <------------------------------
		void add_record(int r, string n, string fn, string p, int y, int ly, string ph, string fs, string e)
		{
			Node *newnode = new Node();
			if(r <= 0)
			{
				cout<<"\t \t \t => Rollno can't be Less than 1"<<endl;
			}
			else
			{
			newnode->rollno = r;
			newnode->name = n;
			newnode->father_name = fn;
			newnode->program = p;
			newnode->Year = y;
			newnode->l_Year = ly;
			newnode->phone = ph;
			newnode->fee_status = fs;
			newnode->email = e;
			tem ++;
			
			newnode->next = Head;
			Head = newnode;
			}
		}
		//-------------------------> ADD FUNCTION ENDS <------------------------------------
		
		//-------------------------> SEARCH FUNCTION STARTS <-------------------------------
		void Search(int no)
		{
			int temp = 0;
			Node *ptr = Head;
			if(ptr == NULL)
			{
				cout<<"\t \t \t \t=> List is Empty. Please Entre Data to Search  \t \t"<<endl;
				cout<<endl;
			}
			else if(no <= 0)
			{
					cout<<"\t \t \t => Rollno can't be Less than 1"<<endl;
			}
			else
			{
			while(ptr != NULL)
			{
				if(ptr->rollno == no)
				{
					cout<<"Roll No      : "<<ptr->rollno<<endl;
					cout<<"Name         : "<<ptr->name<<endl;
					cout<<"Father Name  : "<<ptr->father_name<<endl;
					cout<<"Program      : "<<ptr->program<<endl;
					cout<<"Staring date : "<<ptr->Year<<endl;
					cout<<"Ending date  : "<<ptr->l_Year<<endl;
					cout<<"Phone No     : "<<ptr->phone<<endl;
					cout<<"Fee Status   : "<<ptr->fee_status<<endl;
					cout<<"Email        : "<<ptr->email<<endl;
					cout<<endl;
					cout<<endl;
					temp++;
				}
				ptr = ptr->next;
			}
			if(temp == 0)
			{
				cout<<"\t \t \t \t=> Student is not in the List \t \t"<<endl;
				cout<<endl;
				cout<<endl;
			}
		    }
		}
		//-------------------------> SEARCH FUNCTION ENDS <---------------------------------
		//-------------------------> SEARCH AND DELETE STARTS <-----------------------------
		void Search_and_Delete(int no)
		{
			int temp = 0;
			Node *ptr = Head;
			Node *per = Head;
			
			if(ptr == NULL)
			{
				cout<<"\t \t \t \t=> List is Empty. Please Entre Data to Search and delete \t \t"<<endl;
				cout<<endl;
			}
			else if(no <= 0)
			{
					cout<<"\t \t \t => Rollno can't be Less than 1"<<endl;
			}
			else
			{
			while(ptr != NULL)
			{
				if(ptr->rollno == no)
				{
					cout<<"Roll No      : "<<ptr->rollno<<endl;
					cout<<"Name         : "<<ptr->name<<endl;
					cout<<"Father Name  : "<<ptr->father_name<<endl;
					cout<<"Program      : "<<ptr->program<<endl;
					cout<<"Staring date : "<<ptr->Year<<endl;
					cout<<"Ending date  : "<<ptr->l_Year<<endl;
					cout<<"Phone No     : "<<ptr->phone<<endl;
					cout<<"Fee Status   : "<<ptr->fee_status<<endl;
					cout<<"Email        : "<<ptr->email<<endl;
					cout<<endl;
					cout<<endl;
					temp++;
					
					cout<<"Press y to Delete and n to continue"<<endl;
					char ch;
					cin>>ch;
					switch(ch)
					{
						case 'y':
							{
								if(ptr == Head)
									{
										Head = Head->next;
										//delete(ptr);
									}
								else
								{	
								while(per->next != ptr)
								{
									per = per->next;
								}
									per->next = ptr->next;
									//delete(ptr);
							    }
							    tem --;
							    cout<<endl;
							    cout<<"\t \t \t Roll no : "<<ptr->rollno<<" Deleted"<<endl;
							    delete(ptr);
							}
						case 'n':
							{
								break;
							}
						default:
							{
								cout<<"Please Enter Correct Command"<<endl;
								break;
							}
					}
				}
				ptr = ptr->next;
			}
			if(temp == 0)
			{
				cout<<"\t \t \t \t=> Student is not in the List \t \t"<<endl;
				cout<<endl;
				cout<<endl;
			}
		    }
		}
		//-------------------------> SEARCH AND DELETE ENDS <-------------------------------
		//-------------------------> UPDATE FUNCTION STARTS <-------------------------------
		void Search_and_Update(int no)
		{
			int temp = 0;
			Node *ptr = Head;
			if(ptr == NULL)
			{
				cout<<"\t \t \t \t=> List is Empty. Please Enter Data to Search and update  \t \t"<<endl;
				cout<<endl;
			}
			else if(no <= 0)
			{
					cout<<"\t \t \t => Rollno can't be Less than 1"<<endl;
			}
			else
			{
			while(ptr != NULL)
			{
				if(ptr->rollno == no)
				{
					cout<<"Roll No      : "<<ptr->rollno<<endl;
					cout<<"Name         : "<<ptr->name<<endl;
					cout<<"Father Name  : "<<ptr->father_name<<endl;
					cout<<"Program      : "<<ptr->program<<endl;
					cout<<"Staring date : "<<ptr->Year<<endl;
					cout<<"Ending date  : "<<ptr->l_Year<<endl;
					cout<<"Phone No     : "<<ptr->phone<<endl;
					cout<<"Fee Status   : "<<ptr->fee_status<<endl;
					cout<<"Email        : "<<ptr->email<<endl;
					cout<<endl;
					cout<<endl;
					temp++;
					cout<<endl;
					
				
					cout<<"1)\t to Update rollno of the Student"<<endl;
					cout<<"2)\t to Update Name of the student"<<endl;
					cout<<"3)\t to Update Father Name of the student"<<endl;
					cout<<"4)\t to Update Program of the student"<<endl;
					cout<<"5)\t to Update Admission date of the student"<<endl;
					cout<<"6)\t to Update Degree Completing date of the student"<<endl;
					cout<<"7)\t to Update phone Number of the student"<<endl;
					cout<<"8)\t to Update Fee Status of the student"<<endl;
					cout<<"9)\t to Update Gmail of the student"<<endl;
					cout<<"\n \n \t \t => If you dont want to update the record press 0"<<endl;
					cout<<endl;
					cout<<endl;
					
					int num;
					
					do
					{
					cout<<"Enter your Command : ";
					cin>>num;
					
					switch(num)
					{
						case 1:
							{
								cout<<"Enter New rollno : ";
								int r;
								cin>>r;
								if(r <= 0)
								{		
									cout<<"\t \t \t => Rollno can't be Less than 1"<<endl;
								}
								else
								{
									ptr->rollno = r;
								}
								
								break;
							}
						case 2:
							{
								cout<<"Enter new Name : ";
								string n;
								cin>>n;
								ptr->name = n;
								break;
							}
						case 3:
							{
								cout<<"Enter new Father's Name : ";
								string fn;
								cin>>fn;
								ptr->father_name = fn;
								break;
							}
						case 4:
							{
								cout<<"Enter new Program : ";
								string p;
								cin>>p;
								ptr->program = p;
								break;
							}
						case 5:
							{
								cout<<"Enter new Admission date : ";
								int ad;
								cin>>ad;
								ptr->Year = ad;
								break;
							}
						case 6:
							{
								cout<<"Enter new Degree Completing date : ";
								int cd;
								cin>>cd;
								ptr->l_Year = cd;
								break;
							}
						case 7:
							{
								cout<<"Enter new Phone Number : ";
								string ph;
								cin>>ph;
								ptr->phone = ph;
								break;
							}
						case 8:
							{
								cout<<"Enter new Fee Status : ";
								string fs;
								cin>>fs;
								ptr->fee_status = fs;
								break;
							}
						case 9:
							{
								cout<<"Enter New Gmail : ";
								string gm;
								cin>>gm;
								ptr->email = gm;
								break;
							}
						case 0:
							{
								cout<<" \t \t \t Updated............"<<endl;
								break;
							}
						default:
							{
								cout<<" \t \t \t => Please Enter Correct Command"<<endl;
								break;
							}
					}
				}while(num != 0);
				}
				ptr = ptr->next;
			}
			if(temp == 0)
			{
				cout<<"\t \t \t \t=> Student is not in the List \t \t"<<endl;
				cout<<endl;
				cout<<endl;
			}
		    }
		}
		//-------------------------> UPDATE FUNCTION ENDS <---------------------------------
		
		// ------------------------>  Display Function Starts <-----------------------------
		void display()
		{
			
			
			Node *ptr = Head;
			if(ptr == NULL)
			{
				cout<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"\t \t \t \t=> Record List is Empty \t \t"<<endl;
			}
			else
			{
			struct Node *i;
			struct Node *j;
			
			for(i = Head ; i->next != NULL ; i = i->next)
			{
				for(j = i->next ; j != NULL ; j = j->next)
				{
					if(i->rollno > j->rollno)
					{
						Node *temp = new Node();
						temp->rollno = i->rollno;
						i->rollno = j->rollno;
						j->rollno = temp->rollno;
						
					    temp->name = i->name;
						i->name = j->name;
						j->name = temp->name;
						
						temp->father_name = i->father_name;
						i->father_name = j->father_name;
						j->father_name = temp->father_name;
						
						temp->program = i->program;
						i->program = j->program;
						j->program = temp->program;
						
						temp->Year = i->Year;
						i->Year = j->Year;
						j->Year = temp->Year;
						
						temp->l_Year = i->l_Year;
						i->l_Year = j->l_Year;
						j->l_Year = temp->l_Year;
						
						temp->phone = i->phone;
						i->phone = j->phone;
						j->phone = temp->phone;
						
						temp->fee_status = i->fee_status;
						i->fee_status = j->fee_status;
						j->fee_status = temp->fee_status;
						
						temp->email = i->email;
						i->email = j->email;
						j->email = temp->email;
					}
				}
			}
		    }
			while(ptr != NULL)
			{
				cout<<"Roll No      : "<<ptr->rollno<<endl;
				cout<<"Name         : "<<ptr->name<<endl;
				cout<<"Father Name  : "<<ptr->father_name<<endl;
				cout<<"Program      : "<<ptr->program<<endl;
				cout<<"Staring date : "<<ptr->Year<<endl;
				cout<<"Ending date  : "<<ptr->l_Year<<endl;
				cout<<"Phone No     : "<<ptr->phone<<endl;
				cout<<"Fee Status   : "<<ptr->fee_status<<endl;
				cout<<"Email        : "<<ptr->email<<endl;
				cout<<endl;
				ptr = ptr->next;
			}
			cout<<"\t \t \t \t \t \t \t \t  Total Students : "<<tem;
		}
		//----------------------> Display Function Ends <-----------------------
		
	
};


void menu()
{
	cout<<endl;
	cout<<" \t \t \t \t => WELCOME TO STUDENT INFORMATION SYSTEM <= \t \t \t "<<endl;
	cout<<endl;
	cout<<endl;
}
void admin_block()
{
	cout<<endl;
	cout<<"\t \t \t \t \t \t => ADMIN BLOCK <= \t \t \t"<<endl;
	cout<<endl;
	cout<<endl;
}
void user_block()
{
	cout<<endl;
    cout<<"\t \t \t \t \t \t => User BLOCK <= \t \t \t"<<endl;
	cout<<endl;
	cout<<endl;
}


int main()
{
	Student s1;
	
	menu();
	
	int main_opt;
	
	
	do
	{
    	
		cout<<"1) \t \t => Admin <= \t \t "<<endl;
		cout<<endl;
		cout<<"2) \t \t => User <= \t \t"<<endl;
		cout<<endl;
		cout<<"3) \t \t => Exit <= \t \t"<<endl;
		cout<<endl;
		
		cout<<"Enter Your Command : ";
		cin>>main_opt;
		cout<<endl;
		
		switch(main_opt)
		{
			case 1:
				{
					int admin_opt;
					system("cls");
					
					admin_block();
					do
					{
						
						cout<<"1) \t Press to Add Record "<<endl;
						cout<<"2) \t Press to Update Record "<<endl;
						cout<<"3) \t Press to Search and Delete Record"<<endl;
						cout<<"4) \t Press to Search Record"<<endl;
						cout<<"5) \t Press to See all Record"<<endl;
						cout<<"0) \t Press to Exit Admin"<<endl;
						cout<<endl;
						
						cout<<"Enter Your Command : ";
						cin>>admin_opt;
						cout<<endl;
						
						switch(admin_opt)
						{
							case 1:
								{
									system("cls");
									int rollno;
									string name;
									string father_name;
									string program;
									int Year;
									int l_Year;
									string phone;
									string fee_status;
									string email;
									cout<<"1) Please Enter Student Rollno"<<endl;
									cin>>rollno;
									cout<<"2) Please Enter Student Name"<<endl;
									cin>>name;
									cout<<"3) Please Enter Student's Father Name"<<endl;
									cin>>father_name;
									cout<<"4) Please Enter Program in which Student is curently studing"<<endl;
									cin>>program;
									cout<<"5) Please Enter The Year of Admission"<<endl;
									cin>>Year;
									cout<<"6) Please Enter Year of Degree Completetion"<<endl;
									cin>>l_Year;
									cout<<"7) Please Enter phone number of the student"<<endl;
									cin>>phone;
									cout<<"8) Please Enter Fee Status of the student"<<endl;
									cin>>fee_status;
									cout<<"9) Please Enter The Email of the student"<<endl;
									cin>>email;
									
									s1.add_record(rollno,name,father_name,program,Year,l_Year,phone,fee_status,email);
									system("pause");
									system("cls");
									break;
								}
							case 2:
								{
									system("cls");
									cout<<"Enter Roll no of the student to Search and Update"<<endl;
									int no;
									cin>>no;
									s1.Search_and_Update(no);
									system("pause");
									system("cls");
									break;
								}
							case 3:
								{
									system("cls");
									cout<<"Enter Roll no of the student to Search and Delete"<<endl;
									int no;
									cin>>no;
									s1.Search_and_Delete(no);
									system("pause");
									system("cls");
									break;
								}
							case 4:
								{
									system("cls");
									cout<<"Enter Roll no of the student to Search"<<endl;
									int no;
									cin>>no;
									s1.Search(no);
									system("pause");
									system("cls");
									break;
								}
							case 5:
								{
									system("cls");
									s1.display();
									cout<<endl;
									cout<<endl;
									system("pause");
									system("cls");
									break;
								}
							case 0:
								{
									cout<<"\t \t \t \t \t \t Exited......."<<endl;
									system("pause");
									system("cls");
									menu();
									break;
								}
							default:
								{
									system("cls");
									admin_block();
									cout<<"\t \t \t \t=> Error Please Enter Correct Command \t \t"<<endl;
									cout<<endl;
									break;
								}
						}
					}while(admin_opt != 0);
					break;
				}
			case 2:
				{
					int user_opt;
					
					system("cls");
					user_block();
					
					do
					{
						cout<<"1) \t Press to Search Record"<<endl;
						cout<<"2) \t Press to See all Records"<<endl;
						cout<<"0) \t Press to Exit User"<<endl;
						cout<<endl;
						
						cout<<"Enter Your Command : ";
						cin>>user_opt;
						cout<<endl;
						
						switch(user_opt)
						{
							case 1:
								{
									system("cls");
									cout<<"Enter Roll no of the student to Search"<<endl;
									int no;
									cin>>no;
									s1.Search(no);
									system("pause");
									system("cls");
									break;
								}
							case 2:
								{
									system("cls");
									s1.display();
									cout<<endl;
									cout<<endl;
									system("pause");
									system("cls");
									break;
								}
							case 0:
								{
									cout<<"\t \t \t \t \t \t Exited......."<<endl;
									system("pause");
									system("cls");
									menu();
									break;
								}
							default:
								{
									system("cls");
									user_block();
									cout<<"\t \t \t \t=> Error Please Enter Correct Command \t \t"<<endl;
									cout<<endl;
									break;
								}
						}
						
					}while(user_opt != 0);
					break;
				}
			case 3:
				{
					cout<<"\t \t \t \t \t \t Exited......."<<endl;
					system("pause");
					break;
				}
			default:
				{
					system("cls");
					menu();
					cout<<"\t \t \t \t=> Error Please Enter Correct Command \t \t"<<endl;
					cout<<endl;
					cout<<endl;
					
				}
		}

	}while(main_opt != 3);
}
