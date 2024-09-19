#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Defining the course data
struct Course {
    string name;
    string code;
    string preRequisite1;
    string preRequisite2;
    int serial;
    string Credit;


};

// Function to initialize the course database with available courses
void initializeCourseDatabase(vector<Course>& CourseDatabase) {
    // Defining the Courses that are available
    Course c[49];
   c[0]={"DIFFERENTIAL CALCULUS & CO-ORDINATE GEOMETRY","MAT1102","NP","NP",1,"3 0 0 0 0"};
c[1]={"PHYSICS 1","PHY1101","NP","NP",2,"3 0 0 0 0"};
c[2]={"PHYSICS 1 LAB","PHY1102","NP","NP",3,"1 1 0 0 0"};
c[3]={"ENGLISH READING SKILLS & PUBLIC SPEAKING","ENG1101","NP","NP",4,"3 0 0 1 0"};
c[4]={"INTRODUCTION TO PROGRAMMING","CSC1102","NP","NP",5,"3 0 0 0 0"};
c[5]={"INTRODUCTION TO PROGRAMMING LAB","CSC1103","NP","NP",6,"1 0 1 0 0"};
c[6]={"INTRODUCTION TO COMPUTER STUDIES","CSC1101","NP","NP",7,"1 0 1 0 0"};
c[7]={"Discrete Mathematics","CSC1204","MAT1102","CSC1102",8,"3 0 0 0 0"};
c[8]={"INTEGRAL CALCULUS & ORDINARY DIFFERENTIAL EQUATIONS","MAT1205","MAT1102","NP",9,"3 0 0 0 0"};
c[9]={"OBJECT ORIENTED PROGRAMMING 1","CSC1205","CSC1102","CSC1103",10,"3 0 1 0 0"};
c[10]={"PHYSICS 2","PHY1203","PHY1101","NP",11,"3 0 0 0 0"};
c[11]={"PHYSICS 2 LAB","PHY1204","PHY1102","NP",12,"1 1 0 0 0"};
c[12]={"ENGLISH WRITING SKILLS & COMMUNICATION","ENG1202","ENG1101","NP",13,"3 0 0 1 0"};
c[13]={"INTRODUCTION TO ELECTRICAL CIRCUITS","COE2101","PHY1101","NP",14,"3 0 0 0 0"};
c[14]={"INTRODUCTION TO ELECTRICAL CIRCUITS LAB","COE2102","PHY1102","NP",15,"1 1 0 0 0"};
c[15]={"CHEMISTRY","CHEM1101","PHY1203","NP",16,"3 1 0 0 0"};
c[16]={"COMPLEX VARIABLE,LAPLACE & Z-TRANSFORMATION","MAT2101","MAT1205","NP",17,"3 0 0 0 0"};
c[17]={"INTRODUCTION TO DATABASE","CSC2108","CSC1205","NP",18,"3 0 1 0 0"};
c[18]={"ELECTRONIC DEVICES LAB","EEE2104","COE2102","NP",19,"1 1 0 0 0"};
c[19]={"PRINCIPLES OF ACCOUNTING","BBA1102","MAT1205","NP",20,"3 0 0 0 0"};
c[20]={"ELECTRONIC DEVICES","EEE2103","COE2101","NP",21,"3 0 0 0 0"};
c[21]={"DATA STRUCTURE","CSC2106","CSC1204","CSC1205",22,"3 0 0 0 0"};
c[22]={"DATA STRUCTURE LAB","CSC2107","CSC1204","CSC1205",23,"1 0 1 0 0"};
c[23]={"COMPUTER AIDED DESIGN & DRAFTING","BAE2101","NP","NP",24,"1 0 1 0 0"};
c[24]={"ALGORITHMS","CSC2211","CSC2106","CSC2107",25,"3 0 1 0 0"};
c[25]={"MATRICES, VECTORS, FOURIER ANALYSIS","MAT2202","MAT2101","NP",26,"3 0 0 0 0"};
c[26]={"OBJECT ORIENTED PROGRAMMING 2","CSC2210","CSC2108","CSC1205",27,"3 0 1 0 0"};
c[27]={"OBJECT ORIENTED ANALYSIS AND DESIGN","CSC2209","CSC2108","NP",28,"3 0 0 0 0"};
c[28]={"BANGLADESH STUDIES","BAS2101","CSC1101","NP",29,"3 0 0 0 0"};
c[29]={"DIGITAL LOGIC AND CIRCUITS","EEE3101","EEE2103","NP",30,"3 0 0 0 0"};
c[30]={"DIGITAL LOGIC AND CIRCUITS LAB","EEE3102","EEE2104","NP",31,"1 1 0 0 0"};
c[31]={"COMPUTATIONAL STATISTICS AND PROBABILITY","MAT3103","MAT2101","NP",32,"3 0 0 0 0"};
c[32]={"THEORY OF COMPUTATION","CSC3113","CSC2211","NP",33,"3 0 0 0 0"};
c[33]={"PRINCIPLES OF ECONOMICS","ECO3150","MAT3103","NP",34,"2 0 0 0 0"};
c[34]={"BUSINESS COMMUNICATION","ENG2103","BAS2101","NP",35,"3 0 0 0 0"};
c[35]={"NUMERICAL METHODS FOR SCIENCE AND ENGINEERING","MAT3101","MAT2202","NP",36,"3 0 0 0 0"};
c[36]={"DATA COMMUNICATION","COE3103","EEE3101","EEE3102",37,"3 1 0 0 0"};
c[37]={"MICROPROCESSOR AND EMBEDDED SYSTEM","COE3104","EEE3101","EEE3102",38,"3 1 0 0 0"};
c[38]={"SOFTWARE ENGINEERING","CSC3112","CSC2209","CSC2210",39,"3 0 1 0 0"};
c[39]={"ARTIFICIAL INTELLIGENCE AND EXPERT SYS.","CSC3217","CSC2211","MAT3103",40,"3 0 1 0 0"};
c[40]={"COMPUTER NETWORKS","COE3206","COE3103","NP",41,"3 1 0 0 0"};
c[41]={"COMPUTER ORGANIZATION AND ARCHITECTURE","COE3205","COE3104","NP",42,"3 0 1 0 0"};
c[42]={"OPERATING SYSTEM","CSC3214","CSC2211","COE3104",43,"3 0 1 0 0"};
c[43]={"WEB TECHNOLOGIES","CSC3215","CSC3112","NP",44,"3 0 1 0 0"};
c[44]={"ENGINEERING ETHICS","EEE2216","CSC3112","COE3104",45,"2 0 0 0 0"};
c[45]={"COMPILER DESIGN","CSC3216","CSC3113","NP",46,"3 0 1 0 0"};
c[46]={"COMPUTER GRAPHICS","CSC4118","CSC2211","MAT2202",47,"3 0 1 0 0"};
c[47]={"ENGINEERING MANAGEMENT","MGT3202","EEE2216","NP",48,"3 0 0 0 0"};
c[48]={"THESIS / PROJECT","CSC4298","CSC4197","NP",49,"3 0 0 0 0"};




// putting the available courses into courseDatabase
 for(int i=0;i<49;i++){
    CourseDatabase.push_back(c[i]);
 }
}

// Function to take user input & save completed courses
vector<Course> getCompletedCourses(vector<Course>& CourseDatabase) {
    vector<Course> completedCourses;
    int n;
    cout<<"How many courses you have completed: ";
    cin>>n;
    Course cc[n];
    cout<<"Note : Enter the serial of the courses one by one & invalid serial may lead to false result\n\n";
       cout<<"Enter the serial of the completed courses : ";
    for(int i=0;i<n;i++){
        cin>>cc[i].serial;
        for(int j=0;j<49;j++){
            if(cc[i].serial==CourseDatabase[j].serial){
                 completedCourses.push_back(CourseDatabase[j]);
            }
        }

    }
    return completedCourses;
}

// Function to find available next courses based on completed courses
vector<Course> findNextCourses(const vector<Course>& CourseDatabase, const vector<Course>& completedCourses) {
    vector<Course> nextCourses;
    int flag=0;
    for(int i=0;i<CourseDatabase.size();i++){
            // if there is no pre-requisite then NP
            if( CourseDatabase[i].preRequisite2=="NP"){
                flag++;
            }
            if(CourseDatabase[i].preRequisite1=="NP" && CourseDatabase[i].preRequisite2=="NP"){
                flag=2;
            }
        for(int j=0;j<completedCourses.size();j++){
            // Checking for first pre-requisite

            if(completedCourses[j].code==CourseDatabase[i].preRequisite1 ){
                    flag++;
            }
            // Checking for second pre-requisite
            if(completedCourses[j].code==CourseDatabase[i].preRequisite2 ){
                flag++;
            }
            // Putting the available next courses into nextCourses
            if(flag==2){
                    bool same=false;
                    for(auto& k:completedCourses){
                            // eliminating already completed courses
                        if(k.code == CourseDatabase[i].code){
                               same=true;
                               break;
                        }
                    }
                    if(!same){
                        nextCourses.push_back(CourseDatabase[i]);
                    }
                    break;
            }

        }
        flag=0;


    }

    return nextCourses;
}

// Function to display the available next courses
void displayNextCourses(const vector<Course>& nextCourses) {
    cout<<"----------------------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n\n\n";

  if(nextCourses.empty()){
    cout<<"            No Available Courses"<<endl;
  }
  else{
         cout<<"       Available Courses : "<<endl;
         cout<<"       Credit (Lec-Sci-Comp-Lan-Stu) "<<endl;
  for(int i=0;i<nextCourses.size();i++){

    cout<<"                    "<<i+1<<" : \n";
    cout<<"                                "<<nextCourses[i].name<<endl;
    cout<<"                                "<<nextCourses[i].code<<endl;
    cout<<"                                "<<nextCourses[i].Credit<<endl;

  }
}
}

int main() {
   vector<Course> courseDatabase;
    initializeCourseDatabase(courseDatabase);

    cout << "             -------------------Welcome to the Aiub Pre-requisite solution----------------------\n\n\n\n\n";


    for(int i=0;i<49;i++){
          cout<<"                                "<<courseDatabase[i].serial<<"." <<courseDatabase[i].name<<endl;
    }
    cout << "\n\n\n       Please follow the instructions carefully\n\n\n";
    vector<Course> completedCourses = getCompletedCourses(courseDatabase);

    vector<Course> nextCourses = findNextCourses(courseDatabase, completedCourses);
    //system("cls");

    displayNextCourses(nextCourses);

    return 0;
}

