# nthu-route 2.11
由於原本的 nthu-route 2.0 有非常多的BUG，例如有大量無用處的變數，甚至有陣列開太小或是vector在沒有初始化的情況下直接存取位置等未定義行為(undefined behavior)，加上使用過於古老被淘汰的函式庫導致無法在新版本GCC編譯。因此我花了一點時間修改出現在這個版本，這裡的2.11表示能在C++11的環境下編譯的意思。
## 1. How to Build
**Step 1:** Download the source code. For example,
~~~
$ git clone https://github.com/jacky860226/nthu-route.git
~~~

**Step 2:** Go to the project root and build by
~~~
$ cd nthu-route
$ make clean
$ make all
~~~

Note that this will generate several files in `./obj` and `./lib`. The executable will be placed in `./bin` and named `route`

### 1.1. Dependencies

* [GCC](https://gcc.gnu.org/) (version >= 4.9.3) or other working c++ compliers

## 2. How to Run
Todo