// Reset code (Crucial to use after colored text so it doesn't bleed into the next line)
#define RESET   "\033[0m"

// Text Styles
#define BOLD    "\033[1m"
#define DIM     "\033[2m"
#define UNDERLINE "\033[4m"

// Standard Foreground (Text) Colors
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

// Bright / High-Intensity Foreground Colors
#define GRAY           "\033[90m"
#define BRIGHT_RED     "\033[91m"
#define BRIGHT_GREEN   "\033[92m"
#define BRIGHT_YELLOW  "\033[93m"
#define BRIGHT_BLUE    "\033[94m"
#define BRIGHT_MAGENTA "\033[95m"
#define BRIGHT_CYAN    "\033[96m"
#define BRIGHT_WHITE   "\033[97m"

// Background Colors
#define BG_BLACK   "\033[40m"
#define BG_RED     "\033[41m"
#define BG_GREEN   "\033[42m"
#define BG_YELLOW  "\033[43m"
#define BG_BLUE    "\033[44m"
#define BG_MAGENTA "\033[45m"
#define BG_CYAN    "\033[46m"
#define BG_WHITE   "\033[47m"

// Cursor Movement & Control
#define CURSOR_UP(n)    "\033[" #n "A"  // Move cursor up n lines
#define CURSOR_DOWN(n)  "\033[" #n "B"  // Move cursor down n lines
#define CURSOR_RIGHT(n) "\033[" #n "C"  // Move cursor right n columns
#define CURSOR_LEFT(n)  "\033[" #n "D"  // Move cursor left n columns
#define SAVE_CURSOR     "\033[s"        // Save current cursor position
#define RESTORE_CURSOR  "\033[u"        // Restore saved cursor position
#define HIDE_CURSOR     "\033[?25l"     // Hide the blinking cursor
#define SHOW_CURSOR     "\033[?25h"     // Show the blinking cursor

// Screen & Line Clearing
#define CLEAR_SCREEN    "\033[2J"       // Clear entire screen
#define CLEAR_LINE      "\033[2K"       // Clear current line
#define MOVE_HOME       "\033[H"        // Move cursor to top-left (0,0)

// Extended 256-Color Palette (RGB-style indices)
// Syntax: \033[38;5;{ID}m for text, \033[48;5;{ID}m for background
#define COLOR_256(id)   "\033[38;5;" #id "m"
#define BG_256(id)      "\033[48;5;" #id "m"

// Cool examples:
#define NEON_PURPLE     "\033[38;5;135m"
#define TERMINAL_ORANGE "\033[38;5;208m"
#define MATRIX_GREEN    "\033[38;5;46m"


// 1. Flexible function: Pass any HEX color code (e.g., "#0F172A")
void setTerminalBackground(const std::string& hexColor) {
    std::cout << "\033]11;" << hexColor << "\033\\";
}

// 2. Reset function: Restores the terminal window back to its default color
void resetTerminalBackground() {
    std::cout << "\033]111\033\\"; // OSC 111 resets the window background
}

// 3. Preset Theme Functions tailored for NetPulse CLI
void setThemeCyberDark() {
    setTerminalBackground("#0F172A"); // Deep Slate Navy (Modern & Clean)
}

// Deep Dark Green Tint (Hacker Vibe)
void setThemeMatrix() {
    setTerminalBackground("#051c0d"); 
}

// Dark Neon Purple
void setThemeCyberpunk() {
    setTerminalBackground("#12001e"); 
}

// Cool, professional dark blue-grey (Nord Theme style)
void setThemeNord() {
    setTerminalBackground("#2E3440"); 
}

// Deep vampire purple and pink highlights (Dracula Theme style)
void setThemeDracula() {
    setTerminalBackground("#282A36"); 
}

// Warm charcoal and amber (Monokai Pro style)
void setThemeMonokai() {
    setTerminalBackground("#2D2A2E"); 
}

// Classic deep navy and muted teal (Solarized Dark style)
void setThemeSolarizedDark() {
    setTerminalBackground("#002B36"); 
}

// Pitch black (OLED / True Stealth mode)
void setThemeOLED() {
    setTerminalBackground("#000000"); 
}