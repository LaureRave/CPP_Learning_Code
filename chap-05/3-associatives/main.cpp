#include "keys.h"

#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

int main()
{
    // SET
    std::set<ComparableDog> dogs;
    ComparableDog           medor = { "medor", "labrador" };
    dogs.emplace(medor);

    ComparableDog gus { "gus", "bordercollie" };
    dogs.emplace(gus);
    std::cout << dogs.size() << std::endl;

    ComparableDog medor_clone = medor;
    dogs.emplace(medor_clone);
    std::cout << dogs.size() << std::endl; // le clone n'est pas ajouté

    // UNORDERED SET
    std::unordered_set<HashableDog> dogs2;

    // MAPS
    using Owner = std::pair<std::string, std::string>;
    std::map<ComparableDog, Owner> owners_by_dog;

    ComparableDog zim { "zim", "poodle" };
    ComparableDog flippy { "flippy", "spaniel" };

    owners_by_dog.insert(std::make_pair(medor, Owner { "Claire", "David" }));
    owners_by_dog.insert_or_assign(gus, Owner { "Marc", "Zipstein" });
    owners_by_dog.emplace(zim, Owner { "Céline", "Noël" });
    owners_by_dog.try_emplace(flippy, "Vincent", "Nozick");

    owners_by_dog.emplace(gus, Owner { "Claire", "David" });

    owners_by_dog.insert_or_assign(gus, Owner { "Vincent", "Nozick" });

    return 0;
}