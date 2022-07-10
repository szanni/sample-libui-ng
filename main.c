#include <ui.h>
#include <stdio.h>

int
onClosing(uiWindow *w, void *data)
{
	uiQuit();
	return 1;
}

int
main(void)
{
	uiInitOptions o = {0};
	const char *err;
	uiWindow *w;

	err = uiInit(&o);
	if (err != NULL) {
		fprintf(stderr, "Failed to initialize application: %s\n", err);
		uiFreeInitError(err);
		return -1;
	}

	w = uiNewWindow("Sample App", 640, 480, 0);
	uiWindowOnClosing(w, onClosing, NULL);
	uiControlShow(uiControl(w));
	uiMain();
	uiUninit();
	return 0;
}
