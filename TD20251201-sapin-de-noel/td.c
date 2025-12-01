#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc<2) {
		printf("one argment is missing.");
		return 1;
	}
	int n = atoi(argv[1]);
	if( 0==(n&1) ){
		printf("n must be odd.");
		return 2;
	}
	for(int l=1;l<=n;l++) {
		for(int c=0;c<n-l;c++) putchar(' ');
		for(int c=0;c<(2*l-1);c++) putchar('*');
		putchar('\n');
	}
	for(int l=0;l<2;l++) {
		for(int c=0;c<n-1;c++) putchar(' ');
		puts("|");
	}
	for(int c=0;c<n-2;c++) putchar(' ');
		puts("---");
}
#if 0
// to do in the terminal before make app : 
// apt-get install libncurses5-dev libncursesw5-dev

#include <ncurses.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s largeur_impair\nExemple: %s 7\n", argv[0], argv[0]);
        return 1;
    }

    int width = atoi(argv[1]);
    if (width < 3 || width % 2 == 0) {
        fprintf(stderr, "La largeur doit être un nombre impair >= 3\n");
        return 1;
    }

    initscr();
    if (!has_colors()) {
        endwin();
        fprintf(stderr, "Ce terminal ne supporte pas les couleurs\n");
        return 1;
    }

    start_color();
    use_default_colors();               // <- autorise -1 (couleur par défaut du terminal)

    init_pair(1, COLOR_RED, -1);        // texte rouge, fond = couleur par défaut (blanc chez toi)

    clear();
    attron(COLOR_PAIR(1));
	width=width*2+1;
    int mid = width / 2;
    int row = 0;

    // --- Sapin (triangle) ---
    for (int i = 1; i <= width; i += 2) {
        int start = mid - (i / 2);
        for (int k = 0; k < i; ++k) {
            mvaddch(row, start + k, '*');
        }
        row++;
    }

    // --- Tronc ---
    mvaddch(0, mid, 'O');
    mvaddch(row, mid, '|');
    mvaddch(row+1, mid-1, '-');
    mvaddch(row+1, mid, '-');
    mvaddch(row+1, mid+1, '-');
    mvaddch(row+5, 0, ' ');

    attroff(COLOR_PAIR(1));

    refresh();
    getch();
    endwin();

    return 0;
}
#endif