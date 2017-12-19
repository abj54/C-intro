# /config/proto_dot/.cshrcinstalled as /usr/local/lib/.cshrc
#
# Prototypical .cshrc (csh run commands == initializations) for UMB CS lab
#
# Also available in /usr/local/lib/.cshrc in case you need to go back to
# the original version after editing it.

if ( $?tcsh ) then
    set MSHELL=/bin/tcsh
else
    set MSHELL=/bin/csh
endif

if ( -f /tools/modules/init/$MSHELL:t ) then
    source /tools/modules/init/$MSHELL:t
    # our standard setup uses BSD-style commands
    # if you prefer solaris defaults uncomment the next line
    # module load solaris-standard
    # if you uncomment the line above, comment out the line below
    module load standard ulab operator
    module load java
    # Modules that you use regularly should be appended to the line above.
    # Examples are ulab and ingres.
else
    # Don't simply fail if modules are not available.
    echo "ERROR: cannot find modules\!  Using hard-wired PATH."
    set path=(~$user/bin\
/usr/local/bin\
/usr/ucb\
/bin\
/usr/bin\
/usr/local/gnu/bin\
/usr/local/X11/bin\
/usr/local/hosts\
.\
    ) 
endif
unset MSHELL
 module load standard ulab
setenv TERM vt100

# It is a security breach to load the dot module, but people like it.
if ( $?MODULEPATH ) then
    module load dot
endif

# If this file is being executed by shell run from a program, exit now--
if (! $?prompt) exit

# tcsh claims interpolated variables are backward-compatible with csh.
# Our version is old, and they aren't, so set the prompt conditionally.
if ( $?tcsh ) then
    set prompt="%m(%h)% "
else
    # This isn't a tcsh, so we have to set HOST ourselves.
    setenv HOST `hostname|sed 's/\..*//'`
    set prompt="$HOST(\!)% "
endif

# Remember last NN commands
set history=50

# Don't let inadvertent ^D log me out.
set ignoreeof

# Don't make me type the *whole thing*!  Enable file-completion.
set filecomp
