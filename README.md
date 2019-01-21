# 3dBook-Reader v.0.0   

### 1 - 21  -  2019   Initial commit to this github repository from my local repository.

![Screen Shot](screenShot.png)
 
If you are able to get this source code to compile and run successfully; your machine's display should resemble the screen shot above.

You see a Windows desktop program consisting of a main (parent) window containing two child windows. The child window on the left is the Direct Write - Direct 2D window (DW window).  The window on the right is the OpenGL window (GL window).

## The Concept:  
A prototype for a book format reader combining high quality text typesetting and realtime 3d graphics interactively.

## This version:
On the chance someone, or some party, may be interested in using this source as a starting point for futher development: \b 3dBook-Reader\b0 : v.0.0 , is "bare-bones":  A minimal implementation aiming toward comprehensablity and enabling rapid future development.  

## Log Window: 
In addition to the DW and GL windows seen in the screenshot a "Log Window" dialog should display.  This is a great debugging tool, and was used for most of the debugging on this project.

## The 3dBook-Reader Files:\b0 
This project is called *"The 3dBook-Reader"* ; so what does the reader read?

The **3dBook-Reader**  parses a formatted unicode text file with the .tdr file extension.  The formatting is similar to .rtf formatting but much simpler.  The human readability and writeabilty is on par with that of a markdown language file like this README.MD.  The typesetting capabilities are similar; with sizes, bolds, italics, stike-troughs, underlines and such. Since the typesetting is implemented with the Dwrite API all its methods are available for future development.

The project is called *"The 3dBook-Reader"* , not the *"The 3dScroll-Reader"* ; so it is a **book**  and is paginated like a book.

On start up, the reader loads a file, *start.tdr*, which presents some information about the user interface:  Menus, how to page thru the book, load a file etc.

In this version the DW window controls what openGL graphics routine is run in the GL window.  The .tdr file tells the DW window which openGL routine goes with which pages.

