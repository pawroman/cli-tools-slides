--title My commandline tools
--author Paweł Romanowski

--newpage yakuake
--heading Yakuake

* Konsole-based terminal emulator
* Always at your fingertips
* Allows to split the window, multiple tabs

* Default key config sucks

--beginoutput
* I have:
*   CTRL-SHIFT-N - new tab
*   CTRL-SHIFT-L - split vertically
*   CTRL-SHIFT-T - split horizontally
*   CTRL-PGUP/PGDN - move between tabs
--endoutput


Web: http://kde-apps.org/content/show.php?content=29153

--newpage tmux
--heading tmux

* Better screen
* Console-based terminal multiplexer
* Allows detach
* Allows multiple users
* Useful for ssh sessions

--beginoutput
* CTRL-B + command  (configurable)
*        + % - split window vertically
*        + " - split window horizontally
*        + c - new window (tab)
*        + arrows - move between window parts
*        + 0, 1, 2 - select window (also C-B + w)
*        + d - detach   ("tmux attach" attaches, can name sessions)
*        + ? - help
--endoutput


Web: http://tmux.sourceforge.net/ 

--newpage tmuxinator
--heading tmuxinator

* Ruby program to store tmux sessions
* Easy YAML config
* Allows me to start multiple services using one command

--beginoutput
$ mux <session name>    # start or restore detached/inactive session
$ mux list
$ mux start <session name>
--endoutput


Web: https://github.com/aziz/tmuxinator

--newpage aliases
--heading Shell aliases

* Simple way to save typing for often-used commands
* Just put
    alias cmd="long command path && cat something && sudo blah blah"
  in your .bashrc or .zshrc
* But it's not only commands, it's shell substitution
* List aliases by typing "alias"

--newpage aliases_recommendations
--heading Shell aliases -- recommendations

--beginoutput
    - a command to cd and activate virtualenv
        alias tag="cd ~/git/tagasauris/ && . .env/bin/activate && cd app/tagasauris"
    - :q="exit"     -> for vim maniacs :D
    - G="| grep"    -> $ command G text
    - L="| less -R"
    - df="df -h"
    - du="du -h"
    - grep="grep --color=auto"
    - ls="ls --color=auto -F --group-directories-first -v -h"
    - ...
--endoutput

--newpage storm
--heading Storm -- aliases for ssh sessions

* Simple Python utility to manage ssh configs
* I prefer it to ssh aliases

--beginoutput
$ storm add name user@host --id_file=~/..

$ storm list

$ ssh name
--endoutput


Web: https://github.com/emre/storm


--newpage httpie
--heading httpie -- cmdline HTTP for humans

* Forget about CURL
* Written in Python and based on requests lib
* Uses pygments

(Win already, but there's more)

* Super-concise syntax
* Support for JSON
* Wget-like functionality
* Named saved sessions


Web: https://github.com/jkbr/httpie

--newpage httpie_examples
--heading httpie -- examples

--beginoutput
$ http google.com
$ http https://www.googleapis.com/freebase/v1/search query=="Tagasauris"

$ http PUT httpbin.org/put param=value      # json
$ http -f PUT httpbin.org/put param=value   # form
$ http PUT httpbin.org/put @file.json       # file

$ http 10clouds.com/img/10C_logo.png --follow > logo.png
$ http -d 10clouds.com/img/10C_logo.png     # download mode

$ http -a user:pass api.com                 # auth
$ http --session=tag_api stable.tagasauris.com/api/2/job/
--endoutput

--newpage htop
--heading htop

* top on steroids
* Interactive ncurses interface
* I won't even bother launching top

(A demo commences)


Web: http://htop.sourceforge.net/


--newpage less
--heading less

* less is opposite of more
* Interactive pager
* I don't launch "cat" or "tail -f"
* Multifile mode (less /var/log/*)

--beginoutput
Keys:

/       - search
&       - grep mode
n/N     - next/prev occurence
F       - follow mode (CTRL-C stops)
:n / :p - next/prev file
h       - help
--endoutput

--newpage ack_grin
--heading ack/grin

* ack is "grep" for programmers (in Perl)
* grin is "ack" in Python

--beginoutput
$ grin <regex> <paths>

$ grin -i IgnoReCase

$ grin -I "*py" print

$ grin -C 5 "context"

$ grin -C5 "context" --force-color L     # alias L="less -R"
--endoutput


--newpage links
--heading Links & references

* http://kkovacs.eu/cool-but-obscure-unix-tools

Made using tpp: https://github.com/cbbrowne/tpp/
Source: https://github.com/promanow/cli-tools-slides
