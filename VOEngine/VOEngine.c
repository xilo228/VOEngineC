#include "VOEngine.h"
#ifdef _WIN32
    #define APIENTRY __stdcall
#endif
#include "X11/Xlib.h"
#include <stdio.h>
#include "stdlib.h"

void HelloWorld(){
    printf("Hello World!\n");
}


// void hello(void) {
//     Display *dpy;
//     printf("ssdf");
//     Window root;
//     GLint att[] = {GLX_RGBA, GLX_DEPTH_SIZE, 24, GLX_DOUBLEBUFFER, None};
//     XVisualInfo *vi;
//     Colormap cmap;
//     XSetWindowAttributes swa;
//     Window win;
//     GLXContext glc;
//     XWindowAttributes gwa;
//     XEvent xev;
//     dpy = XOpenDisplay(NULL);

//     if (dpy == NULL) {
//         printf("\n\tcannot connect to X server\n\n");
//         exit(0);
//     }
//     root = DefaultRootWindow(dpy);
//     vi = glXChooseVisual(dpy, 0, att);

//     if (vi == NULL) {
//         printf("\n\tno appropriate visual found\n\n");
//         exit(0);
//     } else {
//         printf("\n\tvisual %p selected\n",
//                (void *) vi->visualid); /* %p creates hexadecimal output like in glxinfo */
//     }
//     cmap = XCreateColormap(dpy, root, vi->visual, AllocNone);
//     swa.colormap = cmap;
//     swa.event_mask = ExposureMask | KeyPressMask;
//     win = XCreateWindow(dpy, root, 0, 0, 600, 600, 0, vi->depth, InputOutput, vi->visual, CWColormap | CWEventMask, &swa);
//     XMapWindow(dpy, win);
//     XStoreName(dpy, win, "VERY SIMPLE APPLICATION");
//     glc = glXCreateContext(dpy, vi, NULL, GL_TRUE);
//     glXMakeCurrent(dpy, win, glc);
//     glEnable(GL_DEPTH_TEST);
//     while(1) {
//         XNextEvent(dpy, &xev);

//         if(xev.type == Expose) {
//             XGetWindowAttributes(dpy, win, &gwa);
//             glViewport(0, 0, gwa.width, gwa.height);
//             drawAQuad();
//             glXSwapBuffers(dpy, win);
//         }

//         else if(xev.type == KeyPress) {
//             glXMakeCurrent(dpy, None, NULL);
//             glXDestroyContext(dpy, glc);
//             XDestroyWindow(dpy, win);
//             XCloseDisplay(dpy);
//             exit(0);
//         }
//     }
// }

// void drawAQuad() {
//     glClearColor(1.0, 1.0, 1.0, 1.0);
//     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

//     glMatrixMode(GL_PROJECTION);
//     glLoadIdentity();
//     glOrtho(-1., 1., -1., 1., 1., 20.);

//     glMatrixMode(GL_MODELVIEW);
//     glLoadIdentity();

//     glBegin(GL_QUADS);
//     glColor3f(1., 0., 0.); glVertex3f(-.75, -.75, 0.);
//     glColor3f(0., 1., 0.); glVertex3f( .75, -.75, 0.);
//     glColor3f(0., 0., 1.); glVertex3f( .75,  .75, 0.);
//     glColor3f(1., 1., 0.); glVertex3f(-.75,  .75, 0.);
//     glEnd();
// }

