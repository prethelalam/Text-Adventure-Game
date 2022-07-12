#include <iostream>
#include <string>
using namespace std;

//Welcome screen
void Welcome () {
    cout<< "\n";
    cout<< "Welcome to the holy and noble land of King Zeus and King Simba. Their empire covers the ends of the earth where the cat civilization is able to run free! If you wish you enter this realm, you must be willing to navigate this vast land. Are you ready warrior? If so, in order to seek shelter, you must find the Holy Snack and provide it to All Mighty Zeus and Simba in order to seek refuge. Good Luck!\n";
    cout<< "\n";
    cout<< "Your directions for moving in this relam are down below:\n";
    cout<< "1. North\n";
    cout<< "2. East\n";
    cout<< "3. West\n";
    cout<< "4. South: Back home\n";
    cout<< "\n";
    cout<<"Which direction would you like to go to begin your journey? Enter 1 for North, 2 for East, 3 for West, and 4 for South to return to your mainland by running away.\n";
    cout<< "\n"; 
}

void PlayGame() {
    int option;
        Welcome();    
        cout<< "option: ";
        cin>> option; 
        cout << "\n";
        if (option >= 5){ // misinput
                cout << "This pathway is closed off, please select a different route.\n";
                cout << "\n";
                cout<<"Which direction would you like to go to begin your journey? Enter 1 for North, 2 for East, 3 for West, and 4 for South to return to your mainland by running away.\n";
                cout<< "\n"; 
                cin >> option;
                cout << "\n";
            }

        
        switch(option) {
            // Starting North 
        int route;
        if (route == 1){
            case 1: 
            cout<< "You have chosen to go North. Fear not this is a safe route to the Holy Snack. It will take you into the cavern to find the Holy Snack.\n";
            cout<< "\n";
            cout<< "Press 1 to continue down this route.\n"; 
            cout << "\n";
            cin >> route;
            cout << "\n";
            if (route !=1){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 1 to continue North.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
            cout << "The cavern will lead you to the Holy Snack but you must fear not since this path is riddled with kind kitties.\n";
            cout << "\n";
            cout<< "Press 1 to continue down this route. However, if you choose to go East, press 2, and if you choose to go West, press 3.\n"; 
            cout << "\n";
            cin >> route;
            cout << "\n";
            if (route >= 4){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 1 to continue North. However, if you choose to go East, press 2, and if you choose to go West, press 3.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
        }
            

        if (route == 1){
            cout << "You have entered the cavern and found the Holy Snack! Congratulations! You may now seek refuge in this holy kingdom!\n";
            cout << "\n";
            cout << "Thank you for playing!\n";
            cout << "\n";
            cout << "To return to your homeland, press 4.\n";
            cout << "\n";
            cin >> route;
            cout << "\n";
            if (route != 4){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 4 to return to your homeland.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
            if (route == 4){ 
            PlayGame();
            }
            
            }
            

            if (route == 3) {
            cout << "You have chosen to go West, this path is much safer than North but there are many chonkasuras's that may plop onto you. This may or not not lead to your death!\n";
            cout << "\n";
            }
                
            if (route == 3){
                cout << "If you choose to continue going West, press 3. If you would like to go East, press 2. If you would liked to go North, press 1.\n";
                cout << "\n";
                cin >> route;
                cout << "\n";
                if (route >= 4){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 1 to continue North. However, if you choose to go East, press 2, and if you choose to go West, press 3.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
            if (route == 3) {
                cout << "You have entered the domain of the chonkasuras's. These chonks are quite fearsome, however there are some docile chonks in this area that will guide you towards the Holy Snack.\n";
                cout << "\n";
                cout << "Look out! Two wild chonks have appeared: Mr. Chumbus and Ms. Chumbus. Mr. Chumbus is quite introverted and tends to himself, he is shy when meeeting new warriors, however Ms. Chumbus is quite vocal and extroverted and will be more than happy to assist warriors!\n";
                cout << "\n";
                cout << "Ms. Chumbas recommends going down the North path (press 1 to go North), while Mr. Chumbus recommends going East (press 2 to go East)\n";
                cout << "\n";
                cout << "If you don't like either path, then you can choose to continue going into the domain of the chonkasuras's. Press 3 to continue going West.\n";
                cout << "\n";
                cin >> route;
                cout << "\n";
                if (route >= 4){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 1 to continue North. However, if you choose to go East, press 2, and if you choose to go West, press 3.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
            }

                if (route==3){
                cout << "\n";
                cout << "You have chosen to go West and disregard Mr. and Ms. Chumbus's advice. The chonks in the domain of the chonasuras may be docile but they do not take kindly to disrepect. These chumbus's are highly respected and valued and may turn vicious due to your lack of awareness.\n";
                cout << "\n";
                cout << "To continue going West, enter 3.\n";
                cout << "\n";
                cin >> route;
                cout << "\n";
                if (route != 3){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 3 to continue going West.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
                cout << "Unfortunately, some wild chonks overheard the conversation and told their elders. They decided your fate would be settled by being plopped on.\n";
                cout << "\n";
                cout << "The pure fluffliness has left you immobilzed, and forever stuck. Best of luck next time!\n";
                cout <<"\n";
                cout << "To return to your homeland, press 4.n";
                cout << "\n";
                cin >> route; 
                cout << "\n";
            if (route != 4){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 4 to return to your homeland.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
            if (route == 4){ 
            PlayGame();
            }
                }
            }

            if (route == 2) {
            cout << "You have chosen to go East. This is a dangerous route that may take you down the right path to find the Holy Snack.\n";
            cout << "\n";
            cout << "This will lead you into the Starving Kitty grotto. These kitties are extremely chonky and you must tread lightly and quietly. If not, you will be eaten!\n";
            cout << "\n";
            cout << "Would you like to continue going East, if so press 2. If not Press 1 to go North\n";
            cout << "\n";
            cin >> route;
            cout << "\n";
            if (route >= 3){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "If you would like to continue going East, press 2. If you would like to go North, Press 1.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
            }

            if (route == 1){
            cout<< "You have chosen to go North. Fear not this is a safe route to the Holy Snack. It will take you into the cavern to find the Holy Snack.\n";
            cout<< "\n";
            cout<< "Press 1 to continue down this route.\n"; 
            cout << "\n";
            cin >> route;
            cout << "\n";
            if (route != 1){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 1 to continue going North.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
            cout << "You have entered the cavern and found the Holy Snack! Congratulations! You may now seek refuge in this holy kingdom!\n";
            cout << "\n";
            cout << "Thank you for playing!\n";
            cout << "\n";
            cout << "To return to your homeland, press 4.\n";
            cout << "\n";
            cin >> route; 
            cout << "\n";
            if (route != 4){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 4 to return to your homeland.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
            if (route == 4){ 
            PlayGame();
            }
                }
            
        

            if (route ==2){
                cout << "You have entered the Starving Kitty grotto. Remember this path is more dangerous, but beware this path might lead to your demise.\n";
                cout << "\n";
                cout << "Press 2 to continue down this dangerous path.\n";
                cout << "\n";
                cin >> route;
                cout << "\n";

            if (route !=2){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 2 to continue going East.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
            }
                        
            if (route ==2){
            cout << "Unfortunately one of the chonky, starving Kitties have swallwed you whole. They mistook you for a snack. Best of luck next time!\n";
            cout << "\n";
                cout << "To return to your homeland, press 4.\n";
                cout << "\n";
                cin >> route; 
                cout << "\n";

            if (route != 4){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 4 to return to your homeland.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
            if (route == 4){ 
            PlayGame();
            }
            } 
            
            // Starting East     
            if (route == 2) {
            case 2: cout << "You have chosen to go East. This is a dangerous route that may take you down the right path to find the Holy Snack.\n";
            cout << "\n";
            cout << "This will lead you into the Starving Kitty grotto. These kitties are extremely chonky and you must tread lightly and quietly. If not, you will be eaten!\n";
            cout << "\n";
            cout << "Would you like to continue going East, if so press 2. If not Press 1 to go North. If you choose to go West, press 3.\n";
            cout << "\n";
            cin >> route;
            cout << "\n";
            
            if (route >= 4){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 1 to go North. However, if you choose to continue going East, press 2. If you choose to go West, press 3.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
            }
            
            if (route == 3) {
            cout << "You have chosen to go West, this path is much safer than North but there are many chonkasuras's that may plop onto you. This may or not not lead to your death!\n";
            cout << "\n";
            }
                
            if (route == 3){
                cout << "If you choose to continue going West, press 3. If you would like to go East, press 2. If you would liked to go North, press 1.\n";
                cout << "\n";
                cin >> route;
                cout << "\n";
            
            if (route >= 4){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 1 to continue North. However, if you choose to go East, press 2, and if you choose to go West, press 3.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
            if (route == 3) {
                cout << "You have entered the domain of the chonkasuras's. These chonks are quite fearsome, however there are some docile chonks in this area that will guide you towards the Holy Snack.\n";
                cout << "\n";
                cout << "Look out! Two wild chonks have appeared: Mr. Chumbus and Ms. Chumbus. Mr. Chumbus is quite introverted and tends to himself, he is shy when meeeting new warriors, however Ms. Chumbus is quite vocal and extroverted and will be more than happy to assist warriors!\n";
                cout << "\n";
                cout << "Ms. Chumbas recommends going down the North path (press 1 to go North), while Mr. Chumbus recommends going East (press 2 to go East)\n";
                cout << "\n";
                cout << "If you don't like either path, then you can choose to continue going into the domain of the chonkasuras's. Press 3 to continue going West.\n";
                cout << "\n";
                cin >> route;
                cout << "\n";
                
                if (route >= 4){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 1 to go North. However, if you choose to go East, press 2, and if you choose continue going West, press 3.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
            }

                if (route==3){
                cout << "You have chosen to go West and disregard Mr. and Ms. Chumbus's advice. The chonks in the domain of the chonasuras may be docile but they do not take kindly to disrepect. These chumbus's are highly respected and valued and may turn vicious due to your lack of awareness.\n";
                cout << "\n";
                cout << "To continue going West, enter 3.\n";
                cout << "\n";
                cin >> route;
                cout << "\n";
                
                if (route != 3){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 3 to continue going West.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
                cout << "Unfortunately, some wild chonks overheard the conversation and told their elders. They decided your fate would be settled by being plopped on.\n";
                cout << "\n";
                cout << "The pure fluffliness has left you immobilzed, and forever stuck. Best of luck next time!\n";
                cout <<"\n";
                cout << "To return to your homeland, press 4.\n";
                cout << "\n";
                cin >> route; 
                cout << "\n";

            if (route != 4){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 4 to return to your homeland.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
            if (route == 4){ 
            PlayGame();
            }
                }
            }
            
            if (route ==1){
                cout<< "You have chosen to go North. Fear not this is a safe route to the Holy Snack. It will take you into the cavern to find the Holy Snack.\n";
                cout<< "\n";
                cout<< "Press 1 to continue down this route.\n"; 
                cout << "\n";
                cin >> route;
                cout << "\n";

                if (route != 1){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 1 to continue going North.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
                cout << "The cavern will lead you to the Holy Snack but you must fear not since this path is riddled with kind kitties.\n";
                cout << "\n";
                cout<< "Press 1 to continue down this route.\n"; 
                cout << "\n";
                cin >> route;
                cout << "\n";
                
                if (route != 1){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 1 to continue going North.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
                cout << "You have entered the cavern and found the Holy Snack! Congratulations! You may now seek refuge in this holy kingdom!\n";
                cout << "\n";
                cout << "Thank you for playing!\n";
                cout << "\n";
                cout << "To return to your homeland, press 4.\n";
                cout << "\n";
                cin >> route;
                cout << "\n";

            if (route != 4){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 4 to return to your homeland.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
            if (route == 4){ 
            PlayGame();
            }
            }

            if (route == 2) {
            cout << "You have chosen to continue going East. You will soon enter the Starving Kitty grotto.\n";
            cout << "\n";
            cout << "Would you like to continue going East, if so press 2. If not Press 1 to go North\n";
            cout << "\n";
            cin >> route;
            cout << "\n";

            if (route >= 3){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "If you would like to continue going East, press 2. If you would like to go North, Press 1.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
            }

            if (route ==1){
                cout<< "You have chosen to go North. Fear not this is a safe route to the Holy Snack. It will take you into the cavern to find the Holy Snack.\n";
                cout<< "\n";
                cout<< "Press 1 to continue down this route.\n"; 
                cout << "\n";
                cin >> route;
                cout << "\n";

                if (route != 1){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "If you would like to continue going North, press 1.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
                cout << "You have entered the cavern and found the Holy Snack! Congratulations! You may now seek refuge in this holy kingdom!\n";
                cout << "\n";
                cout << "Thank you for playing!\n";
                cout << "\n";
                cout << "To return to your homeland, press 4.\n";
                cout << "\n";
                cin >> route;
                cout << "\n";

            if (route != 4){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 4 to return to your homeland.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
            if (route == 4){ 
            PlayGame();
            }
            }
            
            if (route ==2){
                cout << "You have entered the Starving Kitty grotto. Remember this path is more dangerous, but beware this path might lead to your demise.\n";
                cout << "\n";
                cout << "Press 2 to continue down this dangerous path.\n";
                cout << "\n";
                cin >> route;
                cout << "\n";
            
            if (route != 2){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 2 to continue going East.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
            }
                        
            if (route ==2){
            cout << "Unfortunately one of the chonky, starving Kitties have swallwed you whole. They mistook you for a snack. Best of luck next time!\n";
            cout << "\n";
            cout << "To return to your homeland, press 4.\n";
            cout << "\n";
            cin >> route;
            cout << "\n";

            if (route != 4){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 4 to return to your homeland.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
            if (route == 4){ 
            PlayGame();
            }
            }

            // Starting West 
            if (route == 3) { 
            case 3: cout << "You have chosen to go West, this path is much safer than North but there are many chonkasuras's that may plop onto you. This may or not not lead to your death!\n";
            cout << "\n";
            //}
                
            //if (route == 3){
                cout << "If you choose to continue going West, press 3. If you would like to go East, press 2. If you would liked to go North, press 1.\n";
                cout << "\n";
                cin >> route;
                cout << "\n";

                if (route >= 4){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 1 to go North, press 2 to go East, and press 3 to continue going West.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
            
            if (route == 3) {
                cout << "You have entered the domain of the chonkasuras's. These chonks are quite fearsome, however there are some docile chonks in this area that will guide you towards the Holy Snack.\n";
                cout << "\n";
                cout << "Look out! Two wild chonks have appeared: Mr. Chumbus and Ms. Chumbus. Mr. Chumbus is quite introverted and tends to himself, he is shy when meeeting new warriors, however Ms. Chumbus is quite vocal and extroverted and will be more than happy to assist warriors!\n";
                cout << "\n";
                cout << "Ms. Chumbas recommends going down the North path (press 1 to go North), while Mr. Chumbus recommends going East (press 2 to go East)\n";
                cout << "\n";
                cout << "If you don't like either path, then you can choose to continue going into the domain of the chonkasuras's. Press 3 to continue going West.\n";
                cout << "\n";
                cin >> route;
                cout << "\n";

                 if (route >= 4){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 1 to go North. However, if you choose to go East, press 2, and if you choose to go West, press 3.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            
            }
                if (route ==1){
                cout<< "You have chosen to go North. Fear not this is a safe route to the Holy Snack. It will take you into the cavern to find the Holy Snack.\n";
                cout<< "\n";
                cout<< "Press 1 to continue down this route.\n"; 
                cout << "\n";
                cin >> route;
                cout << "\n";

                if (route != 1){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 1 to continue going North.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
                cout << "You have entered the cavern and found the Holy Snack! Congratulations! You may now seek refuge in this holy kingdom!\n";
                cout << "\n";
                cout << "Thank you for playing!\n";
                cout << "\n";
                cout << "To return to your homeland, press 4.\n";
                cout << "\n";
                cin >> route;
                cout << "\n";

                if (route != 4){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 4 to return to your homeland.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }

            if (route == 4){ 
            PlayGame();
            }
            }

            if (route ==3){ 
                cout << "You have chosen to go West and disregard Mr. and Ms. Chumbus's advice. The chonks in the domain of the chonasuras may be docile but they do not take kindly to disrepect. These chumbus's are highly respected and valued and may turn vicious due to your lack of awareness.\n";
                cout << "\n";
                cout << "To continue going West, enter 3.\n";
                cout << "\n";
                cin >> route;
                cout << "\n";

                if (route != 3){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 3 to continue going West.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
                cout << "Unfortunately, some wild chonks overheard the conversation and told their elders. They decided your fate would be settled by being plopped on.\n";
                cout << "\n";
                cout << "The pure fluffliness has left you immobilzed, and forever stuck. Best of luck next time!\n";
                cout <<"\n";
                cout << "To return to your homeland, press 4.\n";
                cout << "\n";
                cin >> route;
                cout << "\n";

                if (route != 4){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 4 to return to your homeland.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
            if (route == 4){ 
            PlayGame();
            }
            }
            }
            }

            if (route == 2) {
            cout << "You have chosen to go East. This is a dangerous route that may take you down the right path to find the Holy Snack.\n";
            cout << "\n";
            cout << "This will lead you into the Starving Kitty grotto. These kitties are extremely chonky and you must tread lightly and quietly. If not, you will be eaten!\n";
            cout << "\n";
            cout << "Would you like to continue going East, if so press 2. If not Press 1 to go North\n";
            cout << "\n";
            cin >> route;
            cout << "\n";

            if (route != 2){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 2 to continue going East. Press 1 to go North.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
            }

            if (route ==1){
                cout<< "You have chosen to go North. Fear not this is a safe route to the Holy Snack. It will take you into the cavern to find the Holy Snack.\n";
                cout<< "\n";
                cout<< "Press 1 to continue down this route.\n"; 
                cout << "\n";
                cin >> route;
                cout << "\n";

                if (route != 1){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 1 to continue going North.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
                cout << "You have entered the cavern and found the Holy Snack! Congratulations! You may now seek refuge in this holy kingdom!\n";
                cout << "\n";
                cout << "Thank you for playing!\n";
                cout << "\n";
                cout << "To return to your homeland, press 4.\n";
                cout << "\n";
                cin >> route;
                cout << "\n";

             if (route != 4){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 4 to return to your homeland.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
            if (route == 4){ 
            PlayGame();
            }
            }
            
            if (route ==2){
                cout << "You have entered the Starving Kitty grotto. Remember this path is more dangerous, but beware this path might lead to your demise.\n";
                cout << "\n";
                cout << "Press 2 to continue down this dangerous path.\n";
                cout << "\n";
                cin >> route;
                cout << "\n";

             if (route != 2){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 2 to continue going East (the dangerous path).\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
            }
                        
            if (route ==2){
            cout << "Unfortunately one of the chonky, starving Kitties have swallwed you whole. They mistook you for a snack. Best of luck next time!\n";
            cout << "\n";
            cout << "To return to your homeland, press 4.\n";
            cout << "\n";
            cin >> route;
            cout << "\n";

            if (route != 4){ // misinput
                cout << "This pathway is being blocked by a chonkasuras, please select a different route.\n";
                cout << "\n";
                cout<< "Press 4 to return to your homeland.\n"; 
                cout<< "\n"; 
                cin >> route;
                cout << "\n";
            }
            if (route == 4){ 
            PlayGame();
            }
            }

            // Starting South
            if (route == 4){
            case 4: cout << "You have chosen to go back to your mainland by running away. If you summon the courage to begin this journey, please come back at your own risk.\n";
            PlayGame(); 
            }        
            }
}

int main ()
    {
        int option;
        while (true) {
            PlayGame();
        }
            }
    