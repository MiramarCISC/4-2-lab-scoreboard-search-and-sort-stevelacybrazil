#include "scoreboard.hpp"
#include <iostream>

using namespace std;

int main() {
    const int SIZE = 5;
    int scores[SIZE] = {25, 10, 30, 15, 40};

    cout << "Scoreboard Analyzer" << endl;
    cout << endl;

    cout << "Original scores:" << endl;
    printScores(scores, DEFAULT_SCORE_COUNT);
    
    cout << endl;

    cout << "Total: " << calculateTotal(scores, SIZE) << endl;
    cout << "Average: " << calculateAverage(scores, SIZE) << endl;
    cout << "Lowest: " << findLowest(scores, SIZE) << endl;
    cout << "Highest: " << findHighest(scores, SIZE) << endl;
    
    cout << endl;

    int target;
    cout << "Enter score to search for: ";
    cin >> target;

    int index = findScore(scores, SIZE, target);
    
    if (index == -1) {
        cout << "Score not found." << endl;
    } else {
        cout << "Score found at index " << index << endl;
    }

    cout << endl;
    sortScores(scores, SIZE);

    cout << "Sorted scores:" << endl;
    printScores(scores, SIZE);

    return 0;
}
