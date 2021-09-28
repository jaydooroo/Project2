//
// Created by ejh61 on 2021-09-25.
//

#ifndef PROJECT1_STARTER_CODE_DATALOGPROGRAM_H
#define PROJECT1_STARTER_CODE_DATALOGPROGRAM_H
#include "Predicate.h"
#include "Parameter.h"
#include "Rule.h"
#include <vector>
#include <set>

class DatalogProgram {
private:
    std::vector <Predicate> scheme;
    std::vector<Predicate> fact;
    std::vector<Rule> rule;
    std::vector<Predicate> query;
    std::set<std::string> domain;

public:

    DatalogProgram() { }

   void setScheme (Predicate tempScheme) {
        scheme.push_back(tempScheme);
    }

    void setFact (Predicate tempFact) {
        fact.push_back(tempFact);

        for (unsigned int i = 0; i < tempFact.returnParameter().size(); i++) {

            domain.insert(tempFact.returnParameter().at(i).toString());
        }
    }

    void setRule (Rule tempRule) {
        rule.push_back(tempRule);
    }

    void setQuery (Predicate tempQuery) {
        query.push_back(tempQuery);
    }

    std::vector<Predicate> &getSchemes () {
        return scheme;
    }

    std::vector<Predicate> &getFacts () {
        return fact;
    }

    std::vector<Rule> &getRules () {
        return rule;
    }

    std::vector<Predicate> &getQueries () {
        return query;
    }

    std::string toString () {
     std::ostringstream oss;

     oss << "Schemes(" << scheme.size() << "):" << std::endl;

     for (unsigned int i = 0; i < scheme.size(); i++) {
         oss << "  " << scheme.at(i).toString() << std::endl;
     }

     oss << "Facts(" << fact.size() << "):" << std::endl;

     for (unsigned int i = 0; i < fact.size(); i++) {
         oss << "  " << fact.at(i).toString() << "." << std::endl;
     }

     oss << "Rules(" << rule.size() << "):" << std::endl;

     for (unsigned int i = 0; i < rule.size(); i++) {
         oss <<"  " << rule.at(i).toString() << std::endl;
     }

     oss <<"Queries(" << query.size() << "):" << std::endl;

     for (unsigned int i = 0; i < query.size(); i++) {

         oss << "  " << query.at(i).toString() << "?" <<std::endl;
     }

     oss << "Domain(" << domain.size() << "):" << std::endl;

     std::set<std::string>::iterator iter;

     for (iter = domain.begin(); iter != domain.end(); iter++) {
         oss << "  " << *iter << std::endl;
     }

     return oss.str();

    }


};


#endif //PROJECT1_STARTER_CODE_DATALOGPROGRAM_H
