#include <iostream>
#include <vector>
#include <string>

// Declaration of the RecyclingBin class
class RecyclingBin;

// Defining a type alias for a function pointer that adds Trash to a specific container
typedef void (RecyclingBin::*AddTrashMethod)(const std::string&);

// The RecyclingBin class handles the sorting of Trash objects
class RecyclingBin {
private:
    std::vector<std::string> recyclables;
    std::vector<std::string> compost;
    std::vector<std::string> landfill;

public:
    // Function to add trash to the recyclable container
    void addRecyclable(const std::string& item) {
        recyclables.push_back(item);
    }

    // Function to add trash to the compost container
    void addCompost(const std::string& item) {
        compost.push_back(item);
    }

    // Function to add trash to the landfill container
    void addLandfill(const std::string& item) {
        landfill.push_back(item);
    }

    // Function to display sorted trash
    void displaySortedTrash() {
        std::cout << "Recyclable Items:" << std::endl;
        for (const auto& item : recyclables) {
            std::cout << "- " << item << std::endl;
        }

        std::cout << "\nCompost Items:" << std::endl;
        for (const auto& item : compost) {
            std::cout << "- " << item << std::endl;
        }

        std::cout << "\nLandfill Items:" << std::endl;
        for (const auto& item : landfill) {
            std::cout << "- " << item << std::endl;
        }
    }
};

// Trash struct now includes a function pointer to the appropriate add method
struct Trash {
    std::string name;
    AddTrashMethod addMethod;

    Trash(std::string n, AddTrashMethod method) : name(n), addMethod(method) {}
};

int main() {
    RecyclingBin bin;

    // Creating trash items with direct function pointers to the add method
    Trash items[] = {
        Trash("Plastic Bottle", &RecyclingBin::addRecyclable),
        Trash("Banana Peel", &RecyclingBin::addCompost),
        Trash("Chip Bag", &RecyclingBin::addLandfill)
    };

    // Adding each trash item to its appropriate container
    for (const auto& item : items) {
        (bin.*(item.addMethod))(item.name);
    }

    // Display the sorted trash
    bin.displaySortedTrash();

    return 0;
}
