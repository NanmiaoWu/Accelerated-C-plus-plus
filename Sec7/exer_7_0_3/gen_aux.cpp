//
// Created by Nanmiao Wu on 2019-04-24.
//

#include "gen_aux.h"
#include <vector>
#include <string>
#include "read_grammar.h"
#include "bracketed.h"
#include <stdexcept>
#include "nrand.h"

using namespace std;

void gen_aux(const Grammar &g, const string &word, vector<string> &ret) {
    if(!bracketed(word)){
        ret.push_back(word);
    } else{
        // locate the rule that corresponds to word
        Grammar::const_iterator it = g.find(word);
        if(it == g.end())
            throw logic_error("empty rule");

        // fetch the set of possible rules
        const Rule_collection &c = it->second;

        // from which we select one at random
        const Rule &r = c[nrand(c.size())];

        // recursively expand the selected rule
        for(Rule::const_iterator i = r.begin(); i != r.end(); ++i){
            gen_aux(g, *i, ret);
        }
    }

}
