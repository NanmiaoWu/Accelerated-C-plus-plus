//
// Created by Nanmiao Wu on 2019-04-24.
//

#include "gen_sentence.h"
#include <list>
#include <string>
#include "read_grammar.h"
#include "gen_aux.h"

using namespace std;

list<string> gen_sentence(const Grammar &g) {
    list<string> ret;
    gen_aux(g, "<sentence>", ret);
    return ret;
}
