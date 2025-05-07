//Header Libraries------------

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

//Define Structure.
    
    typedef struct DataField {
        char fullName[30];
        struct {
            int day, month, year;
        }DoB;
        int mobileNum;
        char email[50];
        char address[60];
    }std;


//Declare function by user------------

    void registration();
    void aboutUs();
    void contactUs();
    void clearInputBuffer();


//Main function----------------

    int main(){

        int userInput; //Declare variable for home screen input.

        while (1) {
            printf("\n<----------------PAGE START FROM HERE------------------\n");
            printf("\nWelcome to Student Portal\n");

            printf("\n\nPlease choose option by no. 1,2,3 :\n\n");
            printf("1.Registration\n");
            printf("2.About Us\n");
            printf("3.Contact Us\n");

            printf("\nEnter your desire input:");

            if ((scanf("%d",&userInput) == 1 ) && ( userInput >= 1 && userInput <= 3)) {
            
                clearInputBuffer();

            switch (userInput) {
                
                case 1: 
                    printf("Registration page here\n");
                    registration();
                    break;
                case 2: 
                    printf("About Us page here\n");
                    aboutUs();
                    break;
                case 3: 
                    printf("Contact Us page here\n");
                    contactUs();
                    break;


                   }
            }
            else { 
                    printf("Invalid input! Enter only 1,2 or 3\n");
                    clearInputBuffer();
            }
        }
        
            return 0;
    }

//Define Clear Input Buffer function.
        
        void clearInputBuffer() {
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) ;
            return ;
        }

//Define Registration function.

        void registration(){
            std data; //Define Structure variable as data.

            //Taking user detail.
            printf("Enter your name: ");
            fgets(data.fullName,sizeof(data.fullName),stdin);
            data.fullName[strcspn(data.fullName, "\n")] = '\0';

            printf("Date or Birth Ex:- 01-01-1990: ");
            scanf("%2d-%2d-%4d",&data.DoB.day,&data.DoB.month,&data.DoB.year);
            clearInputBuffer();

            printf("Enter your Mobile no. : ");
            scanf("%10d",&data.mobileNum);
            clearInputBuffer();

            printf("Enter your Email: ");
            fgets(data.email,sizeof(data.email),stdin);
            data.email[strcspn(data.email, "\n")] = '\0';
            
            printf("Enter your Address: ");
            fgets(data.address,sizeof(data.address),stdin);
            data.address[strcspn(data.address, "\n")] = '\0';

            //Detail saving in file.

        FILE *fptr;

        fptr = fopen("Student_Record.txt","a");

        if (fptr == NULL) {
            printf("File not found!\n");
            return ;
        }

        fclose(fptr);
        printf("File saved successfully.\n");

   
            
            return ;
        }

//Define Contact us function.

        void contactUs (){

            printf("\n---------Contact Us – Cisco University (India)--------\n");

            printf("\n📍 Address:\nCisco University,\nPlot No. 45, Sector 21B,\nKnowledge Park – III, Greater Noida,\nUttar Pradesh – 201310, India \n");

            printf("\n📞 Phone Numbers:\nGeneral Enquiries: +91 98765 43210,\nAdmissions Office: +91 99999 88888,\nSupport Desk: +91 91234 56789 \n");

            printf("\n📧 Email IDs:\nGeneral Queries: info@ciscouniversity.in\nAdmissions: admissions@ciscouniversity.in\nSupport: support@ciscouniversity.in \n");

            printf("\n🌐 Website:\nwww.ciscouniversity.in (dummy URL) \n");

            printf("\n🕒 Office Hours:\nMonday – Friday: 9:00 AM – 6:00 PM\nSaturday: 10:00 AM – 2:00 PM\nSunday: Closed \n");

            printf("\n\n\nPress Enter to return to more...");
            getchar();

            printf("\n📱 Follow Us:\nInstagram: @ciscouniversity\nFacebook: /CiscoUniversityIN\nTwitter: @CiscoUniIN\nLinkedIn: Cisco University India\n");
            printf("\n\n\nPress Enter to return to main menu...");
            getchar();
            return ;
        }
//Define About us function.
        
        void aboutUs (){
            printf("\nAbout Us - College Overview\n");

            printf("\nWelcome to Cisco University, a premier institution dedicated tofostering academic excellence, personal growth, and community development. Nestled inthe heart of Kanpur/India, we stand as a beacon of quality education, empowering students to explore their passions and build their future. With a rich legacy and a commitment to innovation, we aim to nurture leaders who will make a meaningful impact in their fields and society.\n");

            printf("\nAt Cisco University, we believe in creating a dynamic learning environment that is inclusive, diverse, and collaborative. Our faculty members, who are experts in their respective fields, work tirelessly to provide students with the best education possible. Through a combination of rigorous coursework, hands-on learning experiences, and interdisciplinary approaches, we ensure that our students are well-equipped to face the challenges of an ever-evolving world.\n");

            printf("\nOur curriculum is designed not only to impart academic knowledge but also to develop critical thinking, problem-solving abilities, and leadership skills. We encourage our students to think beyond textbooks and engage with real-world issues, thereby honing their ability to analyze, innovate, and create. Whether it’s through industry internships, research opportunities, or community service projects, we provide ample opportunities for students to apply their learning in practical settings.\n");
            printf("\nWe are also deeply committed to fostering a holistic approach to student development. At Cisco University, we recognize the importance of extracurricular activities in shaping well-rounded individuals. From sports and cultural events to clubs and societies, there is something for every student to pursue. These activities allow students to hone their talents, build strong friendships, and grow as individuals.\n");

            printf("\nMoreover, our state-of-the-art infrastructure and modern facilities provide an ideal backdrop for academic and personal growth. Our classrooms are equipped with the latest technology, and our campus is designed to promote interaction and creativity. The library, laboratories, and recreational spaces are all thoughtfully curated to provide students with the tools they need to succeed.\n");

            printf("\n\n\nPress Enter to more...");
            getchar();

            printf("\nIn addition to academic and extracurricular excellence, we prioritize student well-being. Our counseling services, career guidance, and mentorship programs ensure that students have the support they need at every stage of their journey. The sense of belonging and community at Cisco University is something that truly sets us apart, and we work hard to make each student feel valued and supported.\n");

            printf("\nAs we look to the future, we are excited about the endless possibilities that await our students. We continue to evolve, embracing new teaching methods, technologies, and research to ensure that our students are always at the forefront of global developments. We remain dedicated to upholding the highest standards of education, ethics, and social responsibility.\n");
            printf("\nCisco University is not just an institution; it is a place where students grow into confident, capable, and compassionate leaders. We invite you to be a part of this transformative journey, where academic rigor meets personal fulfillment, and lifelong friendships are made. Welcome to Cisco University, where your future begins.\n");
            printf("\n\n\nPress Enter to return to main menu...");
            getchar();

        return ;
        }





           
