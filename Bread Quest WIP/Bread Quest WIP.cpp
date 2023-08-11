#include <iostream>

int main()
{
    //variables
    int navigate = 0;
    int steps = 0;
    int mazeover = 0;
    int check = 0;
    bool breakfast = false;
    bool mainMenu = true;
    bool credits = false;
    bool beggining = false;
    bool baker = false;
    bool townsfolk = false;
    bool mazelevel = false;
    bool city = false;
    bool bread = false;
    bool grain = false;
    bool end = false;
    std::string username;
   
    //Makes game code run over and over till player decides to quit allowing all loops to be repeated 
    int game_play = 0;
    while (game_play == 0)
    {
       

        while (mainMenu == true) 
        {
            
            std::cout << "Welcome to BREAD QUEST\n";
            std::cout << "1) Start 2) Credits 3) Quit\n";
            std::cin >> navigate;

            if (navigate == 1) {
                mainMenu = false;
                navigate = 0;
                beggining = true;
            }

            else if (navigate == 2) {
                credits = true;
                navigate = 0;
                mainMenu = false;
            }

            else if (navigate == 3) {
                return 0;
            }
 
        }

        while (beggining == true)
        {
            std::cout << "Welcome brave adventurere!" << " May I have your name?\n";
            std::cin >> username;
            std::cout << username << " wakes up in a cozey bed in the town of grainsville.\n";
            std::cout << "As you get out of bed you decide bread would be a great opption for breakfast!\n";
            std::cout << "But as you open your bread cubbord to your horror you relize you have no bread!\n";
            std::cout << "You scream at the horror of not having any bread!\n";
            std::cout << "So loud that one of your neighbors comes to see what the issue is.\n";
            std::cout << "Neighbior: Hey " << username << " why are you screaming so loud?\n";
            std::cout << "You explain the dire situation to your neighbor!\n";
            std::cout << "Neighbor: I see so what will you do now?\n";
            breakfast = true;
            beggining = false;
            
        }

            //start to the breadquest adventure
            //begins first decision
        while (breakfast == true && check == 0)
        {
            std::cout << "1) Go on a quest to get more bread." << " 2) Have something else for breakfast.\n";
            std::cin >> navigate;
            if (navigate == 1)
            {
                std::cout << "You anounce loudly to your neaighbor that you must embark on an epic BREAD QUEST!\n";
                std::cout << "Your neaighbor rolls their eys as they wish you good luck on your so called bread quest and returns to their home.\n";
                std::cout << "You gather your things and depart on your quest for bread.\n";
                std::cout << "As you enter town you see a sign that you've never seen before.\n";
                std::cout << "It reads new maze!\n";
                std::cout << "You think nothing of it as you make your way to the towns bakery.\n";
                std::cout << "As you enter the bakery the local baker greets you\n";
                std::cout << "Local Baker: Hey " << username << ".\n" << "What can I do for you today.\n";
                navigate = 0;
                breakfast = false;
                baker = true;

            }

            else if (navigate == 2)
            {
                navigate = 0;
                check = 1;
                std::cout << "After a moment you decide to have something else for breakfast.\n";
                std::cout << "This is the end to your BREAD QUEST. :(\n";
                breakfast = false;
            }
            while (check == 1)
            {
                navigate = 0;
                std::cout << "1) Main menu. 2) Go back.\n";
                std::cin >> navigate;
                if (navigate == 1)
                {
                    navigate = 0; 
                    check = 0;
                    mainMenu = true;
                }
                else if (navigate == 2)
                {
                    navigate = 0;
                    breakfast = true;
                    check = 0;
                }
            }
        }

        while (baker == true) {
            std::cout << "1) Ask the baker to buy some bread. " << "2) Tell the baker about your BREAD QUEST.\n";
            std::cin >> navigate;

            if (navigate == 1) {
                std::cout << "Local Baker: Unfourtunetly we dont have any grain to make bread at the moment ever since they installed that new maze right at the entrance to town.\n" << "The grain deliverys cant figure out how to get through the maze to deliver grain to my shop.\n";
                navigate = 3;
            }

            else if (navigate == 2) {
                std::cout << "Local Baker: I see.\n" << "Thats wonderful news!\n" << "Do you thing you could go through the maze at the entrance to town and get some grain for me?\n";
                navigate = 3;

            }

            else(navigate == 3);
            std::cout << "You decide that you will take on the maze at the entrance to town to further your quest to have bread for breakfast.\n";
            std::cout << "As walk through town you see several towns folk.\n";
            navigate = 0;
            townsfolk = true;
            baker = false;
            
        }
        while (townsfolk == true)
        {
            std::cout << "1) Talk to John." << " 2) Talk to Marry." << " 3) Talk to Ben." << "4) Continue to maze." << "\n";
            std::cin >> navigate;


            if (navigate == 1) {
                std::cout << "You decide to talk to John before entering the maze.\n";
                std::cout << "You ask John about the maze.\n";
                std::cout << "John: Unfourtunetly no ones been able to make it through the maze. It just appeared a few days ago.\n";
                std::cout << "You thank John for his time and return to your quest.\n";
                navigate = 0;

            }

            else if (navigate == 2) {
                std::cout << "You decide to talk to Marry before entering the maze.\n";
                std::cout << "Marry: Despite what those boys might tell you I've acctually made it through the maze.\n";
                //maze solution
                std::cout << "Its simple take a right, then a left, then a right, then two lefts, a right, a left, and one final right and your out.\n";

                std::cout << "You thank Marry for her time and return to your quest.\n";
                navigate = 0;

            }

            else if (navigate == 3) {
                std::cout << "You decide to talk to Ben before entering the maze\n.";
                std::cout << "Ben: I'm to old to be figuring out mazes at this age. I'd take to long and keel over before finding my way back.\n";
                std::cout << "You thank Ben for his time and return to your quest.\n";
                navigate = 0;

            }

            else if (navigate == 4) {
                std::cout << "You continue on to the maze.\n";
                navigate = 0;
                steps = 0;
                mazeover = 0;
                std::cout << "You enter the maze.\n";
                townsfolk = false;
                mazelevel = true;
            }

        }

        while (mazelevel == true)
        {


            //option 1
            while (steps == 0)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go left. 2) Go right.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go left.\n";
                    steps = 3;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << "You go right.\n";
                    steps = 2;
                    mazeover = mazeover++;
                }

            }
            //steps = 2
            while (steps == 2)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go straight. 2) Go left. 3) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go straight.\n";
                    steps = 4;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << "You go left.\n";
                    steps = 8;
                    mazeover = mazeover++;
                }
                else if (navigate == 3)
                {
                    std::cout << "You go back.\n";
                    steps = 0;
                    mazeover = mazeover++;
                }

            }
            //steps = 3 
            while (steps == 3)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go right. 2) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go right.\n";
                    steps = 5;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << "You go back.\n";
                    steps = 0;
                    mazeover = mazeover++;
                }

            }
            //steps = 4
            while (steps == 4)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go straight. 2) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go straight.\n";
                    steps = 6;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << "You go back.\n";
                    steps = 2;
                    mazeover = mazeover++;
                }

            }
            //steps = 5
            while (steps == 5)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go stright. 2) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << ".\n";
                    steps = 7;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << "You go back.\n";
                    steps = 3;
                    mazeover = mazeover++;
                }

            }
            //steps = 6
            while (steps == 6)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "Looks like a dead end.\n";
                std::cout << "1) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go back.\n";
                    steps = 4;
                    mazeover = mazeover++;
                }

            }
            //steps = 7
            while (steps == 7)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go left. 2) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go left.\n";
                    steps = 9;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << "You go back.\n";
                    steps = 5;
                    mazeover = mazeover++;
                }

            }
            //steps = 8
            while (steps == 8)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go straight. 2) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << ".You go straight.\n";
                    steps = 10;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << "You go back.\n";
                    steps = 2;
                    mazeover = mazeover++;
                }

            }
            //steps = 9
            while (steps == 9)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go straight. 2) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << ".You go straight.\n";
                    steps = 11;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << "You go back.\n";
                    steps = 7;
                    mazeover = mazeover++;
                }

            }
            //steps = 10
            while (steps == 10)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go right. 2) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << ".You go right.\n";
                    steps = 12;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << "You go back.\n";
                    steps = 8;
                    mazeover = mazeover++;
                }

            }
            //steps = 11
            while (steps == 11)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go left. 2) Go right. 3) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << ".You go left\n";
                    steps = 13;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << ".You go right\n";
                    steps = 17;
                    mazeover = mazeover++;
                }
                else if (navigate == 3)
                {
                    std::cout << "You go back.\n";
                    steps = 9;
                    mazeover = mazeover++;
                }

            }
            //steps = 12
            while (steps == 12)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go straight. 2) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go straight.\n";
                    steps = 14;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << "You go back.\n";
                    steps = 10;
                    mazeover = mazeover++;
                }

            }
            //steps = 13
            while (steps == 13)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go straight. 2) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go straight.\n";
                    steps = 15;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << "You go back.\n";
                    steps = 11;
                    mazeover = mazeover++;
                }

            }
            //steps = 14
            while (steps == 14)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go left. 2) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go left.\n";
                    steps = 16;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << "You go back.\n";
                    steps = 12;
                    mazeover = mazeover++;
                }

            }
            //steps = 15
            while (steps == 15)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "Looks like a dead end.\n";
                std::cout << "1) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go back.\n";
                    steps = 13;
                    mazeover = mazeover++;
                }

            }
            //steps = 16
            while (steps == 16)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go straight. 2) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go straight.\n";
                    steps = 18;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << "You go back.\n";
                    steps = 14;
                    mazeover = mazeover++;
                }

            }
            //steps = 17
            while (steps == 17)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go straight. 2) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go straight.\n";
                    steps = 19;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << "You go back.\n";
                    steps = 11;
                    mazeover = mazeover++;
                }

            }
            //steps = 18
            while (steps == 18)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go left. 2) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go left.\n";
                    steps = 20;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << "You go back.\n";
                    steps = 16;
                    mazeover = mazeover++;
                }

            }
            //steps = 19
            while (steps == 19)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go straight. 2) Go right. 3) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << ".\n";
                    steps = 23;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << ".\n";
                    steps = 21;
                    mazeover = mazeover++;
                }
                else if (navigate == 3)
                {
                    std::cout << "You go back.\n";
                    steps = 17;
                    mazeover = mazeover++;
                }

            }
            //steps = 20
            while (steps == 20)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go straight. 2) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go straight.\n";
                    steps = 22;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << "You go back.\n";
                    steps = 18;
                    mazeover = mazeover++;
                }

            }
            //steps = 21
            while (steps == 21)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "Looks like a dead end.\n";
                std::cout << "1) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go back.\n";
                    steps = 19;
                    mazeover = mazeover++;
                }

            }
            //steps = 22
            while (steps == 22)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go straight. 2) Go right. 3) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go straight.\n";
                    steps = 24;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << "You go right.\n";
                    steps = 28;
                    mazeover = mazeover++;
                }
                else if (navigate == 3)
                {
                    std::cout << "You go back.\n";
                    steps = 20;
                    mazeover = mazeover++;
                }

            }
            //steps = 23
            while (steps == 23)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go straight. 2) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go straight.\n";
                    steps = 25;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << "You go back.\n";
                    steps = 19;
                    mazeover = mazeover++;
                }

            }
            //steps = 24
            while (steps == 24)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go left. 2) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go left.\n";
                    steps = 26;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << "You go back.\n";
                    steps = 22;
                    mazeover = mazeover++;
                }

            }
            //steps = 25
            while (steps == 25)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go right. 2) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go right.\n";
                    steps = 27;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << "You go back.\n";
                    steps = 23;
                    mazeover = mazeover++;
                }

            }
            //steps = 26
            while (steps == 26)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "Looks like a dead end.\n";
                std::cout << "1) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go back.\n";
                    steps = 24;
                    mazeover = mazeover++;
                }

            }
            //steps = 27
            while (steps == 27)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "Looks like a dead end.\n";
                std::cout << "1) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go back.\n";
                    steps = 25;
                    mazeover = mazeover++;
                }

            }
            //steps = 28
            while (steps == 28)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go straight. 2) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go straight.\n";
                    steps = 30;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << "You go back.\n";
                    steps = 22;
                    mazeover = mazeover++;
                }

            }
            //steps = 30
            while (steps == 30)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go left. 2) Go right. 3) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go left.\n";
                    steps = 36;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << "You go right.\n";
                    steps = 34;
                    mazeover = mazeover++;
                }
                else if (navigate == 3)
                {
                    std::cout << "You go back.\n";
                    steps = 28;
                    mazeover = mazeover++;
                }

            }
            //steps = 32
            while (steps == 32)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go straight. 2) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go straight.\n";
                    steps = 34;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << "You go back.\n";
                    steps = 30;
                    mazeover = mazeover++;
                }

            }
            //steps = 34
            while (steps == 34)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "Looks like a dead end.\n";
                std::cout << "1) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go back.\n";
                    steps = 32;
                    mazeover = mazeover++;
                }

            }
            //steps = 36
            while (steps == 36)
            {
                navigate = 0;
                std::cout << steps << "\n";
                std::cout << mazeover << "\n";
                std::cout << "1) Go right. 2) Go back.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    std::cout << "You go right.\n";
                    steps = 38;
                    mazeover = mazeover++;
                }

                else if (navigate == 2)
                {
                    std::cout << "You go back.\n";
                    steps = 30;
                    mazeover = mazeover++;
                }

            }
            //completion and failure conditions  
            while (steps == 38)
            {
                navigate = 0;
                std::cout << "You succsefully navigate the maze and continue to the city.\n";
                mazelevel = false;
                city = true;
                steps = 0;
                mazeover = 0;
            }
            while (mazeover == 30)
            {
                navigate = 0;
                std::cout << "You get hopefully lost in the maze with no exit in site.\n" << "This is the end to your BREAD QUEST. :( \n";
                std::cout << "1) Go back. 2) Main Menu.\n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    steps = 0;
                    mazeover = 0;
                }
                else if (navigate == 2)
                {
                    navigate = 0;
                    steps = 0;
                    mazeover = 0;
                    mazelevel = false;
                    mainMenu = true;
                }


            }

        }
        // Final portion of the game. Reuse navigate for fianl options should be possible
        std::cout << "You finally arive in the city.\n";
        std::cout << "This is not your first time in the city, however its been a log time since you've last been to the city.\n";
        while (city == true)
        {
            std::cout << "1) Explore. 2) Go to the city bakery.\n";
            std::cin >> navigate;
            if (navigate == 1) {
                std::cout << "You choose to explore the city and as you explore you come across a grain mill.\n";
                std::cout << "The town baker said the deliveries couldn't make it past the maze so you stop in and give the mazes solution to the millers.\n";
                std::cout << "From there you decide to travel to the city bakery to get your bread.\n";
                city = false;
                grain = true;
                bread = true;
                navigate = 0;
            }
            else if (navigate == 2)
            {
                std::cout << "You choose to go straight to the city bakery to buy some bread.\n";
                navigate = 0;
                bread = true;
                city = false;
            }
        }
        // final decision / endings
        while (bread == true) {
            std::cout << "You finally get the bread that you have been questing forfor and it it is finnaly time to return home.\n";
            std::cout << "As you begin to the the city you think to yourself: Why leave when you could have all the bread you want in the city.\n ";
            std::cout << "1) Return to your home town. 2) Make a new home in the city.\n";
            std::cin >> navigate;
            if (navigate == 1 && grain == true) {
                std::cout << "You begin the long journy back to your home town.\n" << "As you arive you navigate the maze and as you exit you see a grain merchant on his way to the bread shop.\n" << "You make it home and can now rest easy knowing you can get bread from you town bakery whenever you want.\n";
                bread = false;
                end = true;
            }
            else if (navigate == 1 && grain == false) {
                std::cout << "You begin the long journy back to your home town.\n" << "As you arive you navigate the maze and as you exit you see your local bakery has a closed sign on it.\n" << "Theres a note on the door that reads:" << "Do to the lack of grain deliveries the bakery is unable to make bread and must close down.\n" << "You remeber passing a grain mill on your way to the bakery and wonder if you could have given them the path to the maze.\n" << "You head home sad that this will be your last loaf of bread.\n";
                bread = false;
                end = true;
            }
            else if (navigate == 2 && grain == true) {
                std::cout << "You decide to stay in the city leaving all you old possesions behind.\n" << "You then remember you only brought enough money to buy a loaf of bread and end up homless with only a loaf of bread and the thought that at least yor village will get grain to make more bread to keep you company.\n";
                bread = false;
                end = true;
            }
            else if (navigate == 2 && grain == false) {
                std::cout << "You decide to stay in the city leaving all you old possesions behind.\n" << "You then remember you only brought enough money to buy a loaf of bread and end up homless with only a loaf of bread to keep you company.\n";
                bread = false;
                end = true;
            }

            while (end == true)
            {
                std::cout << "1) Go back to the city. 2) See other ending. 3) Credits. \n";
                std::cin >> navigate;

                if (navigate == 1)
                {
                    navigate = 0;
                    grain = false;
                    city = true;
                    end = false;
                }
                else if (navigate == 2)
                {
                    navigate = 0;
                    bread = true;
                    end = false;
                }
                else if (navigate == 3)
                {
                    navigate = 0;
                    end = false;
                    credits = true;
                }
            }
        }

        //credits
        while (credits == true)
        {
            std::cout << "Created and produced by Tyler Priest.\n";
            std::cout << "Thanks for playing BREAD QUEST.\n";
            std::cout << "1) Main Menu. 2) Quit game.\n";
            std::cin >> navigate;

            if (navigate == 1)
            {
                mainMenu = true;
                credits = false;
            }
            else if (navigate == 2)
            {
                return 0;
            }
                

        }
        

    }
    
}

