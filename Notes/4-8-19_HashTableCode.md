# Hash Table Coding #
A Hash function transforms keys into an array index. Enables fast lookup of information.

| Collision Resolution | Description                                                                     |
| -------------------- | ------------------------------------------------------------------------------- |
| Linear Resolution    | If two keys hash to the same position we search the table for the next open spot|
| Open Hashing         | If two keys collide, they are placed in a Linked List at the hash index         |


## Hash Table Code ##

##### HASH TABLE DEFINITION #####
    struct nList{
      char* name;         // Defined name
      char* defn;         // Replacement text
      struct nList* next; // Next entry in the chain
    };

    typedef struct nLst* NListPtr;

    unsigned Hash(char* s);
    NListPtr Lookup(char* s);
    NListPtr Insert(char* name, char* defn);

    void PrintHashTable(void);

    // HASH TABLE IMPLEMENTATION
    const int HASH_TABLE_SIZE = 101; // Making this prime reduces collision chances
    static NListPtr hashTable[HASH_TABLE_SIZE];

    char* strdup(const char*); // in string.h but...

    /* Calculate the index to insert a new node */
    unsigned Hash(char* s){
      unsigned hashVal;

      for(hashVal = 0; *s != '\0'; s++){
        hashVal = *s + 31 * hashVal;  // 31 is the offset between upper and lower case letters
      }

      return hashVal % HASH_TABLE_SIZE;
    }

    NListPtr Lookup(char* s){
      NListPtr np;

      for(np = hashTable[Hash(s)]; np != NULL; np = np->next){
        if(strcmp(s, np->name) == 0) return np;
      }
    }

    NListPtr Insert(char* name, char* defn){
      unsigned hashVal;
      NListPtr np;

      if((np = Lookup(name)) == NULL){ // not found
        np = (NListPtr) malloc(sizeof(*np));
        if( np == NULL || (np->name = strdup(name)) == NULL) {
          return NULL;
        }
        hashVal = Hash(name);
        np->next = hashTable[hashVal];
        hashTable[hashVal] = np;
      }else{
        free((void*)np->defn);
        // ...
      }
    }
