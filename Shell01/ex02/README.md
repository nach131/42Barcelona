# Ex02

NAME

     find -- walk a file hierarchy

SYNOPSIS

     find [-H | -L | -P] [-EXdsx] [-f path] path ... [expression]
     find [-H | -L | -P] [-EXdsx] -f path [path ...] [expression]

DESCRIPTION

The find utility recursively descends the directory tree for each path listed, evaluating an
expression (composed of the ``primaries'' and ``operands'' listed below) in terms of each file
in the tree.

