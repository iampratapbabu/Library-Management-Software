struct book
{
    char bookName[51],authorName[51];
    float price;
    int bookid;
};

void addBook()
{

    struct book b;

    fflush(stdin);
    printf("\nEnter Name of Book: ");
    gets(b.bookName);
    printf("Enter the Author's Name: ");
    gets(b.authorName);
    printf("Enter Price of Book: ");
    scanf("%f",&b.price);
    printf("Book Added Successfully with Bookname: %s\nAuthorName: %s\nPrice: %f",b.bookName,b.authorName,b.price);
}
