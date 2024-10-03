#ifndef ARRAY_H
#define ARRAY_H

class arrayList {
  public:
    bool isEmpty() const;
    bool isFull() const;
    int listSize() const;
    int maxListSize() const;
    void print() const;
    bool isItemAtEqual(int loc, int val) const;
    // TODO

  protected:
    int* list;
    int length;
    int maxSize;

};

#endif