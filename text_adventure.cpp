#include <iostream>
#include <string>
using namespace std;

int user_option;
bool in_choice;

void Choice1() {

  in_choice = true;

  while(in_choice == true)
  {
    
    std::cout << "You are now presented with three options:\n";
    std::cout << "1) Wait longer. \n" << "2) Walk home. \n" << "3) Sleep \n";
    //std::cout << "User Option: " << user_option << std::endl;
    std::cin >> user_option;


    if(user_option == 1){
      std::cout << "You decided to wait!\n";
      in_choice = false;
    }
    else if (user_option == 2)
    {
      std::cout << "You decided to walk home!\n";
      in_choice = false;
    }
    else if (user_option == 3){
      std::cout << "You decided to sleep on the bench!\n";
      in_choice = false;
    }


    else if (cin.fail()){
      std::cout << "Please A NUMBER!!\n";
      std::cin.clear();
      std::cin.ignore();

    }

    else
    {
      std::cout << "Please use the numbers above...\n";
    }
    


  }
  
  

}

void Event1(){

  std::cout << "You waited there waiting for the bus to pass. You spend about thirty minutes waiting for the bus to pass but there was still none in sight.\n";
  std::cout << "You lingered a little longer till you finally decided you might want to walk home... \n";
  std::cout << " but before you can  get up and leave, the bus finally comes around!\n";
  std::cout << "You hop onto the bus and rode the bus all the way home!\n";
  std::cout << "As you sit on the bus, you are surronded by people. Some are typing away at their smart phones while others were sleep.\n";
  std::cout << "You sat there admiring the silence that echoes through the bus with the soft humming of the tires wheeling on the road.\n";
  std::cout << "As the bus comes to a stop, you got out and went inside your house.\n";

}

void Event2(){

  std::cout << "You got up and prepared to walk home.\n";
  std::cout << "You walked the dimly lit city as the few cars that were out there pass you by.\n";
  std::cout << "You walk cautiously hoping nothing will jump up at you or startle as you make your way home.\n";
  std::cout << "After 30 or so minutes, you finally made it to your house. \n";

}


void Event3(){

  std::cout << "You curled up on the bench and decided to go to sleep on the bench. \n";
  std::cout << "Since you were already tired anyways, you had no problem in drifting off to sleep. \n";
  std::cout << "You fell asleep and then, as if in a instant you reawake. Now in broad daylight. You sit there thinking to yourself: ''I'm glad this isn't a weekday...\n\n''";
  std::cout << "After a moment, you got up and walked home.\n";

}


int main(){

  std::cout << "I'm Going Home\n\n";
  std::cout << "\n";

  std::cout << "You are on your way home after a long day of work. You waited for a bus for a few minutes and then you finally think: ''I should probably walk home...'' \n\n";

  Choice1();

  switch (user_option)
  {
    case 1:
    Event1();
    break;
    
    case 2:
    Event2();
    break;

    case 3:
    Event3();
    break;

  }


  std::cout << "THE END!";

  user_option = 0;

  return 0;

}

