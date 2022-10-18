#include <iostream>
#include <string>

void print_story()
{
  std::cout << "\nYou live in a village and the King has ordered people to cut down the trees. this cutting of trees has released a curse known as the curse of Babylon and it curses the village the curse makes the village \n";
  std::cout << "people disappear. \n \n";
  std::cout << "Your great grandfather was the one who defeated The person Who Made the curse of Babylon. He was the one to defeat the curse and he was the one who contained it within the \n";
  std::cout << "tree. There has been a Tablet that has been passed down from your great grandfather your mother once said that the data written within the tablet will become visible when \n";
  std::cout << "something very evil awakens, Now that the curse of Babylon is finally awakened, The tablet's data is now visible and it tells you to go into the cave that is inside a \n";
  std::cout << "forest and from there they will tell you how to stop the curse of Babylon\n\n\n";
}

void Print_End_Story() {
  std::cout << "--------------------------------------------------------------------- \n";
  std::cout << "\n\nYou did it! you solved all the puzzles! the gourd that has also been passed down from your family lineage has opened and according to the tablet you need to reach the tree where the curse was released and chant some words to make the curse gointo the gourd! \n";
  std::cout << "you make it to the tree and chant the words written in the tablet! The embodiment of the curse is sucked into the gourd! The curse has been defeated! everyone is cured! YOU DID IT! CONGRATULATIONS!\n \n \n \n";
   
  std::cout << "Thank you for playing! \n";
  std::cout << "Made With Love By Palash Gaikwad \n \n \n"; 
  

}
int intstr(std::string n) {
  if (n == "1") {
    return 1;
  }
  else if (n == "2") {
    return 2;
  } 
  else if (n == "3") {
    return 3;
  } 
   else {
    return 0;
   }
}

int main() {
  std::string selection {};
  int counter{};
  int riddle_2_counter{};
  int riddle_3_counter {};
 do {
    std::cout << "1. Start game\n";
    std::cout << "2. Quit\n";
    std::cin>> selection;
    int select = intstr(selection);

    while (selection != "1" && selection != "2" ) {

    if (selection != "1" && selection != "2") {
        std::cout<<"Wrong input! Please input again!: ";
        std::cin>> selection;
    }
       else if (selection == "1" || selection == "2") {
            break;
        }
    }

    switch (select) {
    case 1:{
    std::string riddle1{};
    print_story();
    std::cout << "\nYou reach the cave and you enter it, you see the following riddle: “Four hang, four sprang, two point the way, two to ward off dogs, one dangles after, always rather \n";
    std::cout << "dirty.” What is your answer? ";
    std::cout << "(Input H for a hint): ";
    std::cin >> riddle1;
  

    if (riddle1 == "h" || riddle1 == "H")
    {
      std::cout << "It's an living animal that produces milk! \n";
    }

    while (riddle1 != "cow" || riddle1 != "Cow")
    {
        if(riddle1 == "cow" || riddle1 == "Cow") {
      break;
    }
      if (riddle1 == "h" || riddle1 == "H")
      {
        std::cout << "Here try again!: ";
        std::cin >> riddle1;
        if (riddle1 == "cow" || riddle1 == "Cow")
        {
          break;
        }
      }
      std::cout << "Wrong answer! Please try again!: ";
      std::cin >> riddle1;
      if (riddle1 == "h" || riddle1 == "H")
      {
        std::cout << "It's an living animal that produces milk! \n";
        std::cout << "Here try again!: ";
        std::cin >> riddle1;
        if (riddle1 == "cow" || riddle1 == "Cow")
        {
          break;
        }
      }
      counter++;
      if (counter % 2 == 0)
      {
        std::cout << "Hey! Maybe you should take a look at the hint! \n";
      }
      if (riddle1 == "cow" || riddle1 == "Cow")
      {
        break;
      }
    }
    std::cout << "--------------------------------------------------------------------------------";
    std::cout << " \n \n You solved the riddle! a door opens and inside is another riddle, there is also a note inside of the room and it reads: \n \n";
    std::cout << "This note documents The curse of Babylon and how it came to be. There was once a woman who lived in this village, She wasn't seen alot in our village and she always seemed like she was a psychopath. suddenly one day she disappeared and we went inside her house. it was an horrific place where she studied about witchcraft and other satanic things. So we traced her down and we managed to figure out that she lived inthe forest near our village. We went inside the forest in search for the woman and we found her. She was Chanting Demonic words in an deep voice. she had let herself be taken over by an evil demon and was \n";
    std::cout << "being controlled to make the curse of Babylon. \n \n";
    std::cout << "Player: The note has been ripped in half.. Maybe the other half is ahead.. \n \n";

    std::string riddle2{};
    std::cout << "You continue to the next riddle. it reads: “From home, I went. From home, I made my way. I saw a road of roads, and a road under them, and a road over them, and a road on all sides. What are we?” (press h for hint): \n";
    std::cin >> riddle2;

    if (riddle2 == "h" || riddle2 == "H")
    {
      std::cout << "It's somewhere Where water flows in a straight line but doesn't fall vertically \n";
    }
    

    while (riddle2 != "river" || riddle2 != "River")
    {
      if (riddle2 == "river" || riddle2 == "River") {
      break;;
    }

      if (riddle2 == "h" || riddle2 == "H")
      {
        std::cout << "Here try again!: ";
        std::cin >> riddle2;
        if (riddle2 == "river" || riddle2 == "River")
        {
          break;
        }
      }

      std::cout << "Wrong answer! Please try again!: ";
      std::cin >> riddle2;
      if (riddle2 == "h" || riddle2 == "H")
      {
        std::cout << "It's somewhere Where water flows in a straight line but doesn't fall vertically \n";
        std::cout << "Here try again!: ";
        std::cin >> riddle2;
        if (riddle2 == "river" || riddle2 == "River") {
          break;
        }
      }

        riddle_2_counter++;
        if (riddle_2_counter % 2 == 0)
        {
          std::cout << "Hey! Maybe you should take a look at the hint! \n";
        }
        if (riddle2 == "river" || riddle2 == "River")
        {
          break;
        }
      
    }
    std::string riddle_3 {};
      std::cout << "------------------------------------------------------------------";
      std::cout << "\n\nYou see texts around the wall congratulating you about how you solved the two riddles. you find what seems to be the other half of the note. You pick the note up and it reads the following: \n";
      std::cout << "\n\nShe had gained alot of strength as she possessed by a incredibly powerful demon but we managed to defeat her but despite defeating her she still managed to cast the curse of Babylon on our village and faded \n";
      std::cout << "to dust. Afterwards we returned to the village and almost all of the inhabitants were incredibly sick. They were so weak they could barely move. We read some of the woman's satanic books to maybe find a clue \n";
      std::cout << "as to how to stop the curse. We Found out that we can Curse an tree to contain the embodiment of the curse itself and we cursed the tree at the heart of the forest I later made an enchanted gourd that could \n";
      std::cout << "also contain the curse and i hope to pass it down by generations And i am going to be locking the way to open the gourd somewhere. \n \n";
      std::cout << "Player: Wait is this my great grandfather? He created the gourd and the tablet? They must have been great! \n \n";

      std::cout << "You continue on to the Final Riddle To open the gourd. *“This thing all things devours. Birds, beasts, trees, flowers; gnaws iron, bites steel; grinds hard stones to meal; slays kings, ruins town, and beats \n";
      std::cout << "mountains down.” (press h for hint) : ";
      std::cin >> riddle_3;

      if (riddle_3 == "h" || riddle_3 == "H")
    {
      std::cout << "It is something that forever flows and cannot be stopped and makes things change the more it flows \n";
    }

    while (riddle_3 != "time" || riddle_3 != "Time")
    {

        if (riddle_3 == "time" || riddle_3 == "Time")
        {
         Print_End_Story();
    return 0;;
        }

      if (riddle_3 == "h" || riddle_3 == "H")
      {
        std::cout << "Here try again!: ";
        std::cin >> riddle_3;

        if (riddle_3 == "time" || riddle_3 == "Time")
        {
         Print_End_Story();
         return 0;
          }

      }

      std::cout << "Wrong answer! Please try again!: ";
      std::cin >> riddle_3;

      if (riddle_3 == "h" || riddle_3 == "H")
      {
      std::cout << "It is something that forever flows and cannot be stopped and makes things change the more it flows \n";
        std::cout << "Here try again!: ";
        std::cin >> riddle_3;
      }

        if (riddle_3 == "Time" || riddle_3 == "time")
        {
        Print_End_Story();
        return 0;
        }

        riddle_3_counter++;
        if (riddle_3_counter % 2 == 0)
        {
          std::cout << "Hey! Maybe you should take a look at the hint! \n";
        }

        if (riddle_3 == "time" || riddle_3 == "Time")
        {
          Print_End_Story();
          return 0;
        }
    }
  }
    case 2: {
        print_story();
    }
    }

  } while (selection != "2");
   
   

    return 0;
}