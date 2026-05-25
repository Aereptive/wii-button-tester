#include <iostream>
#include <gccore.h>      // Hardware library to talk to the Wii console
#include <wiiuse/wpad.h>  // Hardware library specifically for Wii Remotes

int main() {
    // 1. Tell the Wii hardware to boot up its video and wireless controller systems
    VIDEO_Init();
    WPAD_Init();

    std::cout << "--- WII CONTROLLER TEST ENGINE RUNNING ---" << std::endl;

    // 2. The Main Game Loop (Runs 60 times every second continuously)
    while(1) {
        
        // Scan the Bluetooth signal coming from the physical Wii Remotes
        WPAD_ScanPads();
        
        // Store every button being held down by Player 1 into a memory variable
        u32 held = WPAD_ButtonsHeld(0);

        // 3. Evaluate the Button States (Toggle Graphics)
        
        // Check A Button
        if (held & WPAD_BUTTON_A) {
            // Logic: Render the green active asset (btn_a_on.png)
        } else {
            // Logic: Render the default grey idle asset (btn_a_off.png)
        }

        // Check HOME Button (Exit Strategy)
        if (held & WPAD_BUTTON_HOME) {
            exit(0); // Safely close the app and go back to the Homebrew Menu
        }
    }

    return 0;
}
