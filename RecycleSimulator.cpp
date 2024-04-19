#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

// Defining an enum for trash types
enum class TrashType { Recyclable, Compost, Landfill };

// The struct composes and defines the object 'Trash'
struct Trash {
  std::string name;
  TrashType type;
  bool isRecyclable;

  Trash(std::string n, TrashType t, bool recyclable)
      : name(n), type(t), isRecyclable(recyclable) {}
};

// The RecyclingBin class will handle the sorting of Trash objects
class RecyclingBin {
private:
  std::vector<Trash> recyclables;
  std::vector<Trash> compost;
  std::vector<Trash> landfill;

public:
  // A function which adds trash to its appropriate container
  void addTrash(const Trash &item) {
    switch (item.type) {
    case TrashType::Recyclable:
      recyclables.push_back(item);
      break;
    case TrashType::Compost:
      compost.push_back(item);
      break;
    case TrashType::Landfill:
      landfill.push_back(item);
      break;
    }
  }

  // Function to simulate the sorting of trash
  void sortTrash() {
    // The sorting logic would go here
    // In a real-world scenario, this might involve sensors and actuators
    // For this simulation, we'll assume the trash is already presorted
  }

  // Function to display sorted trash
  void displaySortedTrash() {
    std::cout << "Recyclable Items:" << std::endl;
    for (const auto &item : recyclables) {
      std::cout << "- " << item.name << std::endl;
    }

    std::cout << "\nCompost Items:" << std::endl;
    for (const auto &item : compost) {
      std::cout << "- " << item.name << std::endl;
    }

    std::cout << "\nLandfill Items:" << std::endl;
    for (const auto &item : landfill) {
      std::cout << "- " << item.name << std::endl;
    }
  }
};

int main() {
  RecyclingBin bin;

  // Sort the trash - for our simulation, this doesn't change the order
  bin.sortTrash();

  // Display the sorted trash
  bin.displaySortedTrash();

  return 0;
}
