#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// TrashType: Enumerates the types of trash
enum class TrashType {
    Recyclable,
    Compost,
    Landfill
};

// Trash: Represents a single trash item with a type and recyclability status
struct Trash {
    std::string name;   // Name of the trash item
    TrashType type;     // Type of trash
    bool isRecyclable;  // Indicates if the item is recyclable

    // Constructor for Trash
    Trash(std::string n, TrashType t, bool recyclable) : name(n), type(t), isRecyclable(recyclable) {}
};

// RecyclingBin: Handles the categorization and storage of trash
class RecyclingBin {
private:
    // Containers for each type of sorted trash
    std::vector<Trash> recyclables;
    std::vector<Trash> compost;
    std::vector<Trash> landfill;

public:
    // Adds a Trash item to the appropriate container based on its type
    void addTrash(const Trash& item);

    // Simulates the sorting of trash - could be replaced with actual sorting logic
    void sortTrash();

    // Displays the items in each trash container
    void displaySortedTrash();
};

// (Implementation of RecyclingBin methods would go here)

int main() {
    // Create an instance of the recycling system
    RecyclingBin bin;

    // Add sample trash items to the bin
    bin.addTrash(Trash("Plastic Bottle", TrashType::Recyclable, true));
    bin.addTrash(Trash("Banana Peel", TrashType::Compost, false));
    bin.addTrash(Trash("Chip Bag", TrashType::Landfill, false));

    // Sort the trash (placeholder for actual sorting logic)
    bin.sortTrash();

    // Display the sorted categories of trash
    bin.displaySortedTrash();

    return 0;
}
