#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 - int
 - unsigned int
 - float
 - double
 - char
 - bool 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int age = 42;
    int stock = 150;
    int bookPages = 386;

    unsigned int midiNote = 64;
    unsigned long int lotteryPrice = 3984675295;
    unsigned int starsObserved = 65534; 

    double tempInCelsius = 12.55;
    double tempInFahrenheit = 54.59;
    double taxes = 27.8;

    float threshold = -12.5f;
    float decibels = -18.0f;
    float reverbTime = 2.2f;

    char musicNote = 'E';
    char nameFirstLetter = 'N';
    char answer = 'y';
    
    bool taskDone = false;
    bool isReady = true;
    bool containsNuts = false;

    ignoreUnused(number, age, stock, bookPages, midiNote, lotteryPrice, starsObserved, tempInCelsius, tempInFahrenheit, taxes, threshold, decibels, reverbTime, musicNote, nameFirstLetter, answer, taskDone, isReady, containsNuts); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int answerToEverything(bool knowsQuestion, float timeToCalculate = 7.5f, int answer = 42)
{
    ignoreUnused(knowsQuestion, timeToCalculate, answer);
    return {};
}
/*
 2)
 */
double convertCurrency(char convertFrom, char convertTo, float amount, bool roundUp = false)
{
    ignoreUnused(convertFrom, convertTo, amount, roundUp);
    return {};
}
/*
 3)
 */
void delayLoudspeakers(int maxDistance, bool isOutdoor = true, float temperature = 20.0f)
{
    ignoreUnused(maxDistance, isOutdoor, temperature);
}
/*
 4)
 */
bool needsPhantomPower(char transducerType = 'c')
{
    ignoreUnused(transducerType);
    return {};
}
/*
 5)
 */
int getSurfaceArea(int width = 0, int height = 1)
{
    ignoreUnused(width, height);
    return {};
}
/*
 6)
 */
void waveLength(float lambda, float frequency, double speedOfSound = 343.6)
{
    ignoreUnused(lambda, frequency, speedOfSound);  
}
/*
 7)
 */
void print(int numPages, bool inColor = true, bool enoughInk = true)
{
    ignoreUnused(numPages, inColor, enoughInk);
}
/*
 8)
 */
float thrustHelicopter(float powerFrontRotor, float powerRearRotor, int numBlades = 3)
{
    ignoreUnused(powerFrontRotor, powerRearRotor, numBlades);
    return {};
}
/*
 9)
 */
void vrTrackingSensor(char turnDirection = 'f', bool raiseHead = false, bool lowerHead = false)
{
    ignoreUnused(turnDirection, raiseHead, lowerHead);
}
/*
 10)
 */
int amplifySignal(int input, float factor = 0.5f)
{
    ignoreUnused(input, factor);
    return {};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto answer = answerToEverything(false, 1.79f, 42);
    //2)
    auto currencyValue = convertCurrency('d', 'e', 87.99f, true);
    //3)
    delayLoudspeakers(200, true, 24.3f);
    //4)
    auto connectMic = needsPhantomPower('d');
    //5)
    auto roomSize = getSurfaceArea(200, 11);
    //6)
    waveLength(0.78f, 440.0f, 343.6);
    //7)
    print(4, false, true);
    //8)
    auto helicopterSpecs = thrustHelicopter(7.3f, 5.2f, 3);
    //9)
    vrTrackingSensor('r', true, false);
    //10)
    auto newVolume = amplifySignal(-8, 1.5f);
    
    ignoreUnused(carRented, answer, currencyValue, connectMic, roomSize, helicopterSpecs, newVolume);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
