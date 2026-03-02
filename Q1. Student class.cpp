#include<iostream>
using namespace std;
class student {
	private :
	int sub1,sub2,sub3;
	public:
		float average(){
		return (sub1+sub2+sub3)/3.0;	
		}
		float percentage(){
			return (sub1+sub2+sub3)*100.0/300.0;
		}
		void ReadSubMarks(){
			cout<<"enter Sub 1 marks:";
			cin>>sub1;
			cout<<"enter Sub 2 marks:";
			cin>>sub2;
			cout<<"enter Sub 3 marks:";
			cin>>sub3;	
		}
		void DisplayDetails(){
			cout<<"Student details:\n"<<sub1;
			cout<<" "<<sub2<<" "<<sub3<<endl;
			cout<<"AVG:"<<average();
			cout<<"\nPercentage:"<<percentage()<<endl;
			}
			
};

int main(){
	student s1,s2,s3;
	cout<<"  Student 1 \n";
	s1.ReadSubMarks();
	cout<<"  Student 2 \n";
	s2.ReadSubMarks();
	cout<<"  Student 3 \n";
	s3.ReadSubMarks();
	
	cout<<"\nStudent 1 details"<<endl;
	s1.DisplayDetails();
	cout<<"\nStudent 2 details"<<endl;
	s2.DisplayDetails();
	cout<<"\nStudent 3 details"<<endl;	
	s3.DisplayDetails();
	return 0;
}
