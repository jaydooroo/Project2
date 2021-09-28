//
// Created by ejh61 on 2021-09-25.
//

#ifndef PROJECT1_STARTER_CODE_RULE_H
#define PROJECT1_STARTER_CODE_RULE_H
#include "Predicate.h"
#include <vector>
#include <sstream>


class Rule {
private:
    Predicate headPredicate;
    std::vector <Predicate> predicateList;


public:

    Rule(Predicate tempHead): headPredicate(tempHead) { }

    ~Rule() {}

    void setPredicateList (Predicate tempPredicate) {
        predicateList.push_back(tempPredicate);
    }

    Predicate getPredicate () {
        return headPredicate;
    }
    std::vector<Predicate> &getPredicateList () {
        return predicateList;
    }

    std::string toString () {
        std::ostringstream oss;

        oss << headPredicate.toString() << " :- ";

        for (unsigned int i = 0; i < predicateList.size() - 1; i++) {
            oss << predicateList.at(i).toString() << ",";
        }

        oss << predicateList.at(predicateList.size() - 1).toString() << ".";

        return oss.str();
    }

};


#endif //PROJECT1_STARTER_CODE_RULE_H
