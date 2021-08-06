" W'ere usiing VI Improved, use it then. Just a conf since this should happen auto
set nocompatible
" Search while I type, with highlighting, only using case if i do
set ignorecase
set smartcase
set incsearch
set hls
" Shift/Tab
filetype plugin indent on
" vim.wikia.com/wiki/indenting_source_code
" improve tab functionality
set expandtab
set tabstop=2 shiftwidth=2
" no vertical scroll
set nowrap
set textwidth=0
" Randomness
" Always show some kind of status
set laststatus=2
set statusline=
set statusline+=%f
set statusline+=%r
set statusline+=%m
set statusline+=%=
set statusline+=%y
set statusline+=\ %p%%
set statusline+=\ %l:%c
" turn on line numbering.
set number
set visualbell errorbells ruler
" Joining the darkside...
set mouse=a
" Put some vertical space around the cursor
set scrolloff=2
" Fix trailing whitespace so they are easilyrecognizable
set list
set listchars=eol:\$,tab:\|\ ,trail:~
" Make non text more visible
highlight NonText guifg=#4a4a59 guibg=#4a4a59
" Setup Persistent undo
set undofile
set undodir=~/.undo
set noswapfile
