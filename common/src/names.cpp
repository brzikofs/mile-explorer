//
// Created by lotus mile on 31/10/2018.
//

#include "names.hpp"

namespace milecsa::explorer::table {
    using namespace std;

    const vector<string>& get_names() {
        static vector<string> names = {
                name::meta,
                name::blockchain_info,
                name::node_states,
                name::node_wallets,
                name::blocks,
                name::blocks_processing,
                name::wallets,
                name::transactions,
                name::transactions_state,
                name::transactions_processing,
                name::turnovers
        };

        return names;
    }

    const vector<table::index::description>& get_indices() {
        static vector<index::description> indices = {
                {name::blocks, "block-id"},
                {name::blocks, "timestamp"},
                {name::blocks_processing, "block-id"},
                {name::node_states, "block-id"},
                {name::transactions, "block-id"},
                {name::transactions, "digest"},
                {name::transactions, "serial"},
                {name::transactions, "timestamp"},
                {name::transactions_processing, "block-id"},

        };
        return indices;
    }

    const map<string,string>& get_replacement_keys(){
        static map<string,string> repl_keys = {
            {"transaction-name","transaction-type"}
        };

        return repl_keys;
    }
}

