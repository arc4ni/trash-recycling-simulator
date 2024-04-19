#include <iostream>
#include <vector>
#include <string>

// Forward declaration of the RecyclingBin class
class RecyclingBin;

// Define a type for a function pointer that adds an item to a specific container
typedef void (RecyclingBin::*AddMethod)(const std::string&);

// The RecyclingBin class will handle the sorting of items
class RecyclingBin {
private:
    std::vector<std::string> recyclables;
    std::vector<std::string> compost;
    std::vector<std::string> landfill;

public:
    // Method to add an item to the recyclable container
    void addRecyclable(const std::string& item) {
        recyclables.push_back(item);
    }

    // Method to add an item to the compost container
    void addCompost(const std::string& item) {
        compost.push_back(item);
    }

    // Method to add an item to the landfill container
    void addLandfill(const std::string& item) {
        landfill.push_back(item);
    }

    // Method to display sorted items
    void displaySortedItems() const {
        std::cout << "Recyclable Items:\n";
        for (const auto& item : recyclables) {
            std::cout << "- " << item << '\n';
        }
        
        std::cout << "\nCompost Items:\n";
        for (const auto& item : compost) {
            std::cout << "- " << item << '\n';
        }

        std::cout << "\nLandfill Items:\n";
        for (const auto& item : landfill) {
            std::cout << "- " << item << '\n';
        }
    }
};

// Struct that represents an item with a name and a method to add it to a container
struct Item {
    std::string name;
    AddMethod addMethod;

    Item(std::string n, AddMethod method) : name(n), addMethod(method) {}
};

int main() {
    // Instantiate the RecyclingBin
    RecyclingBin bin;

    // The application logic to add items would go here
    // For example, bin.addRecyclable("Soda Can");

    // After adding items, display the sorted items
    bin.displaySortedItems();

    return 0;
}
