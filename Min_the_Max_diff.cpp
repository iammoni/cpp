<!DOCTYPE html>
<!-- saved from url=(0046)https://www.jdoodle.com/online-compiler-c++14/ -->
<html lang="en"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8"><script type="text/javascript" async="" src="./Min_the_Max_diff_files/publishertag.prebid.js.download"></script><style id="ace-xcode">.ace-xcode .ace_gutter {background: #e8e8e8;color: #333}.ace-xcode .ace_print-margin {width: 1px;background: #e8e8e8}.ace-xcode {background-color: #FFFFFF;color: #000000}.ace-xcode .ace_cursor {color: #000000}.ace-xcode .ace_marker-layer .ace_selection {background: #B5D5FF}.ace-xcode.ace_multiselect .ace_selection.ace_start {box-shadow: 0 0 3px 0px #FFFFFF;}.ace-xcode .ace_marker-layer .ace_step {background: rgb(198, 219, 174)}.ace-xcode .ace_marker-layer .ace_bracket {margin: -1px 0 0 -1px;border: 1px solid #BFBFBF}.ace-xcode .ace_marker-layer .ace_active-line {background: rgba(0, 0, 0, 0.071)}.ace-xcode .ace_gutter-active-line {background-color: rgba(0, 0, 0, 0.071)}.ace-xcode .ace_marker-layer .ace_selected-word {border: 1px solid #B5D5FF}.ace-xcode .ace_constant.ace_language,.ace-xcode .ace_keyword,.ace-xcode .ace_meta,.ace-xcode .ace_variable.ace_language {color: #C800A4}.ace-xcode .ace_invisible {color: #BFBFBF}.ace-xcode .ace_constant.ace_character,.ace-xcode .ace_constant.ace_other {color: #275A5E}.ace-xcode .ace_constant.ace_numeric {color: #3A00DC}.ace-xcode .ace_entity.ace_other.ace_attribute-name,.ace-xcode .ace_support.ace_constant,.ace-xcode .ace_support.ace_function {color: #450084}.ace-xcode .ace_fold {background-color: #C800A4;border-color: #000000}.ace-xcode .ace_entity.ace_name.ace_tag,.ace-xcode .ace_support.ace_class,.ace-xcode .ace_support.ace_type {color: #790EAD}.ace-xcode .ace_storage {color: #C900A4}.ace-xcode .ace_string {color: #DF0002}.ace-xcode .ace_comment {color: #008E00}.ace-xcode .ace_indent-guide {background: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAAE0lEQVQImWP4////f4bLly//BwAmVgd1/w11/gAAAABJRU5ErkJggg==) right repeat-y}
/*# sourceURL=ace/css/ace-xcode */</style><style>.ace_snippet-marker {    -moz-box-sizing: border-box;    box-sizing: border-box;    background: rgba(194, 193, 208, 0.09);    border: 1px dotted rgba(211, 208, 235, 0.62);    position: absolute;}</style><style>    .error_widget_wrapper {        background: inherit;        color: inherit;        border:none    }    .error_widget {        border-top: solid 2px;        border-bottom: solid 2px;        margin: 5px 0;        padding: 10px 40px;        white-space: pre-wrap;    }    .error_widget.ace_error, .error_widget_arrow.ace_error{        border-color: #ff5a5a    }    .error_widget.ace_warning, .error_widget_arrow.ace_warning{        border-color: #F1D817    }    .error_widget.ace_info, .error_widget_arrow.ace_info{        border-color: #5a5a5a    }    .error_widget.ace_ok, .error_widget_arrow.ace_ok{        border-color: #5aaa5a    }    .error_widget_arrow {        position: absolute;        border: solid 5px;        border-top-color: transparent!important;        border-right-color: transparent!important;        border-left-color: transparent!important;        top: -5px;    }</style><style type="text/css">svg:not(:root).svg-inline--fa {
  overflow: visible;
}

.svg-inline--fa {
  display: inline-block;
  font-size: inherit;
  height: 1em;
  overflow: visible;
  vertical-align: -0.125em;
}
.svg-inline--fa.fa-lg {
  vertical-align: -0.225em;
}
.svg-inline--fa.fa-w-1 {
  width: 0.0625em;
}
.svg-inline--fa.fa-w-2 {
  width: 0.125em;
}
.svg-inline--fa.fa-w-3 {
  width: 0.1875em;
}
.svg-inline--fa.fa-w-4 {
  width: 0.25em;
}
.svg-inline--fa.fa-w-5 {
  width: 0.3125em;
}
.svg-inline--fa.fa-w-6 {
  width: 0.375em;
}
.svg-inline--fa.fa-w-7 {
  width: 0.4375em;
}
.svg-inline--fa.fa-w-8 {
  width: 0.5em;
}
.svg-inline--fa.fa-w-9 {
  width: 0.5625em;
}
.svg-inline--fa.fa-w-10 {
  width: 0.625em;
}
.svg-inline--fa.fa-w-11 {
  width: 0.6875em;
}
.svg-inline--fa.fa-w-12 {
  width: 0.75em;
}
.svg-inline--fa.fa-w-13 {
  width: 0.8125em;
}
.svg-inline--fa.fa-w-14 {
  width: 0.875em;
}
.svg-inline--fa.fa-w-15 {
  width: 0.9375em;
}
.svg-inline--fa.fa-w-16 {
  width: 1em;
}
.svg-inline--fa.fa-w-17 {
  width: 1.0625em;
}
.svg-inline--fa.fa-w-18 {
  width: 1.125em;
}
.svg-inline--fa.fa-w-19 {
  width: 1.1875em;
}
.svg-inline--fa.fa-w-20 {
  width: 1.25em;
}
.svg-inline--fa.fa-pull-left {
  margin-right: 0.3em;
  width: auto;
}
.svg-inline--fa.fa-pull-right {
  margin-left: 0.3em;
  width: auto;
}
.svg-inline--fa.fa-border {
  height: 1.5em;
}
.svg-inline--fa.fa-li {
  width: 2em;
}
.svg-inline--fa.fa-fw {
  width: 1.25em;
}

.fa-layers svg.svg-inline--fa {
  bottom: 0;
  left: 0;
  margin: auto;
  position: absolute;
  right: 0;
  top: 0;
}

.fa-layers {
  display: inline-block;
  height: 1em;
  position: relative;
  text-align: center;
  vertical-align: -0.125em;
  width: 1em;
}
.fa-layers svg.svg-inline--fa {
  -webkit-transform-origin: center center;
          transform-origin: center center;
}

.fa-layers-counter, .fa-layers-text {
  display: inline-block;
  position: absolute;
  text-align: center;
}

.fa-layers-text {
  left: 50%;
  top: 50%;
  -webkit-transform: translate(-50%, -50%);
          transform: translate(-50%, -50%);
  -webkit-transform-origin: center center;
          transform-origin: center center;
}

.fa-layers-counter {
  background-color: #ff253a;
  border-radius: 1em;
  -webkit-box-sizing: border-box;
          box-sizing: border-box;
  color: #fff;
  height: 1.5em;
  line-height: 1;
  max-width: 5em;
  min-width: 1.5em;
  overflow: hidden;
  padding: 0.25em;
  right: 0;
  text-overflow: ellipsis;
  top: 0;
  -webkit-transform: scale(0.25);
          transform: scale(0.25);
  -webkit-transform-origin: top right;
          transform-origin: top right;
}

.fa-layers-bottom-right {
  bottom: 0;
  right: 0;
  top: auto;
  -webkit-transform: scale(0.25);
          transform: scale(0.25);
  -webkit-transform-origin: bottom right;
          transform-origin: bottom right;
}

.fa-layers-bottom-left {
  bottom: 0;
  left: 0;
  right: auto;
  top: auto;
  -webkit-transform: scale(0.25);
          transform: scale(0.25);
  -webkit-transform-origin: bottom left;
          transform-origin: bottom left;
}

.fa-layers-top-right {
  right: 0;
  top: 0;
  -webkit-transform: scale(0.25);
          transform: scale(0.25);
  -webkit-transform-origin: top right;
          transform-origin: top right;
}

.fa-layers-top-left {
  left: 0;
  right: auto;
  top: 0;
  -webkit-transform: scale(0.25);
          transform: scale(0.25);
  -webkit-transform-origin: top left;
          transform-origin: top left;
}

.fa-lg {
  font-size: 1.3333333333em;
  line-height: 0.75em;
  vertical-align: -0.0667em;
}

.fa-xs {
  font-size: 0.75em;
}

.fa-sm {
  font-size: 0.875em;
}

.fa-1x {
  font-size: 1em;
}

.fa-2x {
  font-size: 2em;
}

.fa-3x {
  font-size: 3em;
}

.fa-4x {
  font-size: 4em;
}

.fa-5x {
  font-size: 5em;
}

.fa-6x {
  font-size: 6em;
}

.fa-7x {
  font-size: 7em;
}

.fa-8x {
  font-size: 8em;
}

.fa-9x {
  font-size: 9em;
}

.fa-10x {
  font-size: 10em;
}

.fa-fw {
  text-align: center;
  width: 1.25em;
}

.fa-ul {
  list-style-type: none;
  margin-left: 2.5em;
  padding-left: 0;
}
.fa-ul > li {
  position: relative;
}

.fa-li {
  left: -2em;
  position: absolute;
  text-align: center;
  width: 2em;
  line-height: inherit;
}

.fa-border {
  border: solid 0.08em #eee;
  border-radius: 0.1em;
  padding: 0.2em 0.25em 0.15em;
}

.fa-pull-left {
  float: left;
}

.fa-pull-right {
  float: right;
}

.fa.fa-pull-left,
.fas.fa-pull-left,
.far.fa-pull-left,
.fal.fa-pull-left,
.fab.fa-pull-left {
  margin-right: 0.3em;
}
.fa.fa-pull-right,
.fas.fa-pull-right,
.far.fa-pull-right,
.fal.fa-pull-right,
.fab.fa-pull-right {
  margin-left: 0.3em;
}

.fa-spin {
  -webkit-animation: fa-spin 2s infinite linear;
          animation: fa-spin 2s infinite linear;
}

.fa-pulse {
  -webkit-animation: fa-spin 1s infinite steps(8);
          animation: fa-spin 1s infinite steps(8);
}

@-webkit-keyframes fa-spin {
  0% {
    -webkit-transform: rotate(0deg);
            transform: rotate(0deg);
  }
  100% {
    -webkit-transform: rotate(360deg);
            transform: rotate(360deg);
  }
}

@keyframes fa-spin {
  0% {
    -webkit-transform: rotate(0deg);
            transform: rotate(0deg);
  }
  100% {
    -webkit-transform: rotate(360deg);
            transform: rotate(360deg);
  }
}
.fa-rotate-90 {
  -ms-filter: "progid:DXImageTransform.Microsoft.BasicImage(rotation=1)";
  -webkit-transform: rotate(90deg);
          transform: rotate(90deg);
}

.fa-rotate-180 {
  -ms-filter: "progid:DXImageTransform.Microsoft.BasicImage(rotation=2)";
  -webkit-transform: rotate(180deg);
          transform: rotate(180deg);
}

.fa-rotate-270 {
  -ms-filter: "progid:DXImageTransform.Microsoft.BasicImage(rotation=3)";
  -webkit-transform: rotate(270deg);
          transform: rotate(270deg);
}

.fa-flip-horizontal {
  -ms-filter: "progid:DXImageTransform.Microsoft.BasicImage(rotation=0, mirror=1)";
  -webkit-transform: scale(-1, 1);
          transform: scale(-1, 1);
}

.fa-flip-vertical {
  -ms-filter: "progid:DXImageTransform.Microsoft.BasicImage(rotation=2, mirror=1)";
  -webkit-transform: scale(1, -1);
          transform: scale(1, -1);
}

.fa-flip-both, .fa-flip-horizontal.fa-flip-vertical {
  -ms-filter: "progid:DXImageTransform.Microsoft.BasicImage(rotation=2, mirror=1)";
  -webkit-transform: scale(-1, -1);
          transform: scale(-1, -1);
}

:root .fa-rotate-90,
:root .fa-rotate-180,
:root .fa-rotate-270,
:root .fa-flip-horizontal,
:root .fa-flip-vertical,
:root .fa-flip-both {
  -webkit-filter: none;
          filter: none;
}

.fa-stack {
  display: inline-block;
  height: 2em;
  position: relative;
  width: 2.5em;
}

.fa-stack-1x,
.fa-stack-2x {
  bottom: 0;
  left: 0;
  margin: auto;
  position: absolute;
  right: 0;
  top: 0;
}

.svg-inline--fa.fa-stack-1x {
  height: 1em;
  width: 1.25em;
}
.svg-inline--fa.fa-stack-2x {
  height: 2em;
  width: 2.5em;
}

.fa-inverse {
  color: #fff;
}

.sr-only {
  border: 0;
  clip: rect(0, 0, 0, 0);
  height: 1px;
  margin: -1px;
  overflow: hidden;
  padding: 0;
  position: absolute;
  width: 1px;
}

.sr-only-focusable:active, .sr-only-focusable:focus {
  clip: auto;
  height: auto;
  margin: 0;
  overflow: visible;
  position: static;
  width: auto;
}

.svg-inline--fa .fa-primary {
  fill: var(--fa-primary-color, currentColor);
  opacity: 1;
  opacity: var(--fa-primary-opacity, 1);
}

.svg-inline--fa .fa-secondary {
  fill: var(--fa-secondary-color, currentColor);
  opacity: 0.4;
  opacity: var(--fa-secondary-opacity, 0.4);
}

.svg-inline--fa.fa-swap-opacity .fa-primary {
  opacity: 0.4;
  opacity: var(--fa-secondary-opacity, 0.4);
}

.svg-inline--fa.fa-swap-opacity .fa-secondary {
  opacity: 1;
  opacity: var(--fa-primary-opacity, 1);
}

.svg-inline--fa mask .fa-primary,
.svg-inline--fa mask .fa-secondary {
  fill: black;
}

.fad.fa-inverse {
  color: #fff;
}</style><style id="autocompletion.css">.ace_editor.ace_autocomplete .ace_marker-layer .ace_active-line {    background-color: #CAD6FA;    z-index: 1;}.ace_dark.ace_editor.ace_autocomplete .ace_marker-layer .ace_active-line {    background-color: #3a674e;}.ace_editor.ace_autocomplete .ace_line-hover {    border: 1px solid #abbffe;    margin-top: -1px;    background: rgba(233,233,253,0.4);    position: absolute;    z-index: 2;}.ace_dark.ace_editor.ace_autocomplete .ace_line-hover {    border: 1px solid rgba(109, 150, 13, 0.8);    background: rgba(58, 103, 78, 0.62);}.ace_completion-meta {    opacity: 0.5;    margin: 0.9em;}.ace_completion-message {    color: blue;}.ace_editor.ace_autocomplete .ace_completion-highlight{    color: #2d69c7;}.ace_dark.ace_editor.ace_autocomplete .ace_completion-highlight{    color: #93ca12;}.ace_editor.ace_autocomplete {    width: 300px;    z-index: 200000;    border: 1px lightgray solid;    position: fixed;    box-shadow: 2px 3px 5px rgba(0,0,0,.2);    line-height: 1.4;    background: #fefefe;    color: #111;}.ace_dark.ace_editor.ace_autocomplete {    border: 1px #484747 solid;    box-shadow: 2px 3px 5px rgba(0, 0, 0, 0.51);    line-height: 1.4;    background: #25282c;    color: #c1c1c1;}
/*# sourceURL=ace/css/autocompletion.css */</style><style>.ace_snippet-marker {    -moz-box-sizing: border-box;    box-sizing: border-box;    background: rgba(194, 193, 208, 0.09);    border: 1px dotted rgba(211, 208, 235, 0.62);    position: absolute;}</style><style>    .error_widget_wrapper {        background: inherit;        color: inherit;        border:none    }    .error_widget {        border-top: solid 2px;        border-bottom: solid 2px;        margin: 5px 0;        padding: 10px 40px;        white-space: pre-wrap;    }    .error_widget.ace_error, .error_widget_arrow.ace_error{        border-color: #ff5a5a    }    .error_widget.ace_warning, .error_widget_arrow.ace_warning{        border-color: #F1D817    }    .error_widget.ace_info, .error_widget_arrow.ace_info{        border-color: #5a5a5a    }    .error_widget.ace_ok, .error_widget_arrow.ace_ok{        border-color: #5aaa5a    }    .error_widget_arrow {        position: absolute;        border: solid 5px;        border-top-color: transparent!important;        border-right-color: transparent!important;        border-left-color: transparent!important;        top: -5px;    }</style><style id="ace-tm">.ace-tm .ace_gutter {background: #f0f0f0;color: #333;}.ace-tm .ace_print-margin {width: 1px;background: #e8e8e8;}.ace-tm .ace_fold {background-color: #6B72E6;}.ace-tm {background-color: #FFFFFF;color: black;}.ace-tm .ace_cursor {color: black;}.ace-tm .ace_invisible {color: rgb(191, 191, 191);}.ace-tm .ace_storage,.ace-tm .ace_keyword {color: blue;}.ace-tm .ace_constant {color: rgb(197, 6, 11);}.ace-tm .ace_constant.ace_buildin {color: rgb(88, 72, 246);}.ace-tm .ace_constant.ace_language {color: rgb(88, 92, 246);}.ace-tm .ace_constant.ace_library {color: rgb(6, 150, 14);}.ace-tm .ace_invalid {background-color: rgba(255, 0, 0, 0.1);color: red;}.ace-tm .ace_support.ace_function {color: rgb(60, 76, 114);}.ace-tm .ace_support.ace_constant {color: rgb(6, 150, 14);}.ace-tm .ace_support.ace_type,.ace-tm .ace_support.ace_class {color: rgb(109, 121, 222);}.ace-tm .ace_keyword.ace_operator {color: rgb(104, 118, 135);}.ace-tm .ace_string {color: rgb(3, 106, 7);}.ace-tm .ace_comment {color: rgb(76, 136, 107);}.ace-tm .ace_comment.ace_doc {color: rgb(0, 102, 255);}.ace-tm .ace_comment.ace_doc.ace_tag {color: rgb(128, 159, 191);}.ace-tm .ace_constant.ace_numeric {color: rgb(0, 0, 205);}.ace-tm .ace_variable {color: rgb(49, 132, 149);}.ace-tm .ace_xml-pe {color: rgb(104, 104, 91);}.ace-tm .ace_entity.ace_name.ace_function {color: #0000A2;}.ace-tm .ace_heading {color: rgb(12, 7, 255);}.ace-tm .ace_list {color:rgb(185, 6, 144);}.ace-tm .ace_meta.ace_tag {color:rgb(0, 22, 142);}.ace-tm .ace_string.ace_regex {color: rgb(255, 0, 0)}.ace-tm .ace_marker-layer .ace_selection {background: rgb(181, 213, 255);}.ace-tm.ace_multiselect .ace_selection.ace_start {box-shadow: 0 0 3px 0px white;}.ace-tm .ace_marker-layer .ace_step {background: rgb(252, 255, 0);}.ace-tm .ace_marker-layer .ace_stack {background: rgb(164, 229, 101);}.ace-tm .ace_marker-layer .ace_bracket {margin: -1px 0 0 -1px;border: 1px solid rgb(192, 192, 192);}.ace-tm .ace_marker-layer .ace_active-line {background: rgba(0, 0, 0, 0.07);}.ace-tm .ace_gutter-active-line {background-color : #dcdcdc;}.ace-tm .ace_marker-layer .ace_selected-word {background: rgb(250, 250, 255);border: 1px solid rgb(200, 200, 250);}.ace-tm .ace_indent-guide {background: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAAE0lEQVQImWP4////f4bLly//BwAmVgd1/w11/gAAAABJRU5ErkJggg==") right repeat-y;}
/*# sourceURL=ace/css/ace-tm */</style><style id="ace_editor.css">.ace_br1 {border-top-left-radius    : 3px;}.ace_br2 {border-top-right-radius   : 3px;}.ace_br3 {border-top-left-radius    : 3px; border-top-right-radius:    3px;}.ace_br4 {border-bottom-right-radius: 3px;}.ace_br5 {border-top-left-radius    : 3px; border-bottom-right-radius: 3px;}.ace_br6 {border-top-right-radius   : 3px; border-bottom-right-radius: 3px;}.ace_br7 {border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-right-radius: 3px;}.ace_br8 {border-bottom-left-radius : 3px;}.ace_br9 {border-top-left-radius    : 3px; border-bottom-left-radius:  3px;}.ace_br10{border-top-right-radius   : 3px; border-bottom-left-radius:  3px;}.ace_br11{border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-left-radius:  3px;}.ace_br12{border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}.ace_br13{border-top-left-radius    : 3px; border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}.ace_br14{border-top-right-radius   : 3px; border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}.ace_br15{border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-right-radius: 3px; border-bottom-left-radius: 3px;}.ace_editor {position: relative;overflow: hidden;padding: 0;font: 12px/normal 'Monaco', 'Menlo', 'Ubuntu Mono', 'Consolas', 'source-code-pro', monospace;direction: ltr;text-align: left;-webkit-tap-highlight-color: rgba(0, 0, 0, 0);}.ace_scroller {position: absolute;overflow: hidden;top: 0;bottom: 0;background-color: inherit;-ms-user-select: none;-moz-user-select: none;-webkit-user-select: none;user-select: none;cursor: text;}.ace_content {position: absolute;box-sizing: border-box;min-width: 100%;contain: style size layout;font-variant-ligatures: no-common-ligatures;}.ace_dragging .ace_scroller:before{position: absolute;top: 0;left: 0;right: 0;bottom: 0;content: '';background: rgba(250, 250, 250, 0.01);z-index: 1000;}.ace_dragging.ace_dark .ace_scroller:before{background: rgba(0, 0, 0, 0.01);}.ace_selecting, .ace_selecting * {cursor: text !important;}.ace_gutter {position: absolute;overflow : hidden;width: auto;top: 0;bottom: 0;left: 0;cursor: default;z-index: 4;-ms-user-select: none;-moz-user-select: none;-webkit-user-select: none;user-select: none;contain: style size layout;}.ace_gutter-active-line {position: absolute;left: 0;right: 0;}.ace_scroller.ace_scroll-left {box-shadow: 17px 0 16px -16px rgba(0, 0, 0, 0.4) inset;}.ace_gutter-cell {position: absolute;top: 0;left: 0;right: 0;padding-left: 19px;padding-right: 6px;background-repeat: no-repeat;}.ace_gutter-cell.ace_error {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAABOFBMVEX/////////QRswFAb/Ui4wFAYwFAYwFAaWGAfDRymzOSH/PxswFAb/SiUwFAYwFAbUPRvjQiDllog5HhHdRybsTi3/Tyv9Tir+Syj/UC3////XurebMBIwFAb/RSHbPx/gUzfdwL3kzMivKBAwFAbbvbnhPx66NhowFAYwFAaZJg8wFAaxKBDZurf/RB6mMxb/SCMwFAYwFAbxQB3+RB4wFAb/Qhy4Oh+4QifbNRcwFAYwFAYwFAb/QRzdNhgwFAYwFAbav7v/Uy7oaE68MBK5LxLewr/r2NXewLswFAaxJw4wFAbkPRy2PyYwFAaxKhLm1tMwFAazPiQwFAaUGAb/QBrfOx3bvrv/VC/maE4wFAbRPBq6MRO8Qynew8Dp2tjfwb0wFAbx6eju5+by6uns4uH9/f36+vr/GkHjAAAAYnRSTlMAGt+64rnWu/bo8eAA4InH3+DwoN7j4eLi4xP99Nfg4+b+/u9B/eDs1MD1mO7+4PHg2MXa347g7vDizMLN4eG+Pv7i5evs/v79yu7S3/DV7/498Yv24eH+4ufQ3Ozu/v7+y13sRqwAAADLSURBVHjaZc/XDsFgGIBhtDrshlitmk2IrbHFqL2pvXf/+78DPokj7+Fz9qpU/9UXJIlhmPaTaQ6QPaz0mm+5gwkgovcV6GZzd5JtCQwgsxoHOvJO15kleRLAnMgHFIESUEPmawB9ngmelTtipwwfASilxOLyiV5UVUyVAfbG0cCPHig+GBkzAENHS0AstVF6bacZIOzgLmxsHbt2OecNgJC83JERmePUYq8ARGkJx6XtFsdddBQgZE2nPR6CICZhawjA4Fb/chv+399kfR+MMMDGOQAAAABJRU5ErkJggg==");background-repeat: no-repeat;background-position: 2px center;}.ace_gutter-cell.ace_warning {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAAAmVBMVEX///8AAAD///8AAAAAAABPSzb/5sAAAAB/blH/73z/ulkAAAAAAAD85pkAAAAAAAACAgP/vGz/rkDerGbGrV7/pkQICAf////e0IsAAAD/oED/qTvhrnUAAAD/yHD/njcAAADuv2r/nz//oTj/p064oGf/zHAAAAA9Nir/tFIAAAD/tlTiuWf/tkIAAACynXEAAAAAAAAtIRW7zBpBAAAAM3RSTlMAABR1m7RXO8Ln31Z36zT+neXe5OzooRDfn+TZ4p3h2hTf4t3k3ucyrN1K5+Xaks52Sfs9CXgrAAAAjklEQVR42o3PbQ+CIBQFYEwboPhSYgoYunIqqLn6/z8uYdH8Vmdnu9vz4WwXgN/xTPRD2+sgOcZjsge/whXZgUaYYvT8QnuJaUrjrHUQreGczuEafQCO/SJTufTbroWsPgsllVhq3wJEk2jUSzX3CUEDJC84707djRc5MTAQxoLgupWRwW6UB5fS++NV8AbOZgnsC7BpEAAAAABJRU5ErkJggg==");background-position: 2px center;}.ace_gutter-cell.ace_info {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAAAAAA6mKC9AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAAJ0Uk5TAAB2k804AAAAPklEQVQY02NgIB68QuO3tiLznjAwpKTgNyDbMegwisCHZUETUZV0ZqOquBpXj2rtnpSJT1AEnnRmL2OgGgAAIKkRQap2htgAAAAASUVORK5CYII=");background-position: 2px center;}.ace_dark .ace_gutter-cell.ace_info {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQBAMAAADt3eJSAAAAJFBMVEUAAAChoaGAgIAqKiq+vr6tra1ZWVmUlJSbm5s8PDxubm56enrdgzg3AAAAAXRSTlMAQObYZgAAAClJREFUeNpjYMAPdsMYHegyJZFQBlsUlMFVCWUYKkAZMxZAGdxlDMQBAG+TBP4B6RyJAAAAAElFTkSuQmCC");}.ace_scrollbar {contain: strict;position: absolute;right: 0;bottom: 0;z-index: 6;}.ace_scrollbar-inner {position: absolute;cursor: text;left: 0;top: 0;}.ace_scrollbar-v{overflow-x: hidden;overflow-y: scroll;top: 0;}.ace_scrollbar-h {overflow-x: scroll;overflow-y: hidden;left: 0;}.ace_print-margin {position: absolute;height: 100%;}.ace_text-input {position: absolute;z-index: 0;width: 0.5em;height: 1em;opacity: 0;background: transparent;-moz-appearance: none;appearance: none;border: none;resize: none;outline: none;overflow: hidden;font: inherit;padding: 0 1px;margin: 0 -1px;contain: strict;-ms-user-select: text;-moz-user-select: text;-webkit-user-select: text;user-select: text;white-space: pre!important;}.ace_text-input.ace_composition {background: transparent;color: inherit;z-index: 1000;opacity: 1;}.ace_composition_placeholder { color: transparent }.ace_composition_marker { border-bottom: 1px solid;position: absolute;border-radius: 0;margin-top: 1px;}[ace_nocontext=true] {transform: none!important;filter: none!important;clip-path: none!important;mask : none!important;contain: none!important;perspective: none!important;mix-blend-mode: initial!important;z-index: auto;}.ace_layer {z-index: 1;position: absolute;overflow: hidden;word-wrap: normal;white-space: pre;height: 100%;width: 100%;box-sizing: border-box;pointer-events: none;}.ace_gutter-layer {position: relative;width: auto;text-align: right;pointer-events: auto;height: 1000000px;contain: style size layout;}.ace_text-layer {font: inherit !important;position: absolute;height: 1000000px;width: 1000000px;contain: style size layout;}.ace_text-layer > .ace_line, .ace_text-layer > .ace_line_group {contain: style size layout;position: absolute;top: 0;left: 0;right: 0;}.ace_hidpi .ace_text-layer,.ace_hidpi .ace_gutter-layer,.ace_hidpi .ace_content,.ace_hidpi .ace_gutter {contain: strict;will-change: transform;}.ace_hidpi .ace_text-layer > .ace_line, .ace_hidpi .ace_text-layer > .ace_line_group {contain: strict;}.ace_cjk {display: inline-block;text-align: center;}.ace_cursor-layer {z-index: 4;}.ace_cursor {z-index: 4;position: absolute;box-sizing: border-box;border-left: 2px solid;transform: translatez(0);}.ace_multiselect .ace_cursor {border-left-width: 1px;}.ace_slim-cursors .ace_cursor {border-left-width: 1px;}.ace_overwrite-cursors .ace_cursor {border-left-width: 0;border-bottom: 1px solid;}.ace_hidden-cursors .ace_cursor {opacity: 0.2;}.ace_hasPlaceholder .ace_hidden-cursors .ace_cursor {opacity: 0;}.ace_smooth-blinking .ace_cursor {transition: opacity 0.18s;}.ace_animate-blinking .ace_cursor {animation-duration: 1000ms;animation-timing-function: step-end;animation-name: blink-ace-animate;animation-iteration-count: infinite;}.ace_animate-blinking.ace_smooth-blinking .ace_cursor {animation-duration: 1000ms;animation-timing-function: ease-in-out;animation-name: blink-ace-animate-smooth;}@keyframes blink-ace-animate {from, to { opacity: 1; }60% { opacity: 0; }}@keyframes blink-ace-animate-smooth {from, to { opacity: 1; }45% { opacity: 1; }60% { opacity: 0; }85% { opacity: 0; }}.ace_marker-layer .ace_step, .ace_marker-layer .ace_stack {position: absolute;z-index: 3;}.ace_marker-layer .ace_selection {position: absolute;z-index: 5;}.ace_marker-layer .ace_bracket {position: absolute;z-index: 6;}.ace_marker-layer .ace_error_bracket {position: absolute;border-bottom: 1px solid #DE5555;border-radius: 0;}.ace_marker-layer .ace_active-line {position: absolute;z-index: 2;}.ace_marker-layer .ace_selected-word {position: absolute;z-index: 4;box-sizing: border-box;}.ace_line .ace_fold {box-sizing: border-box;display: inline-block;height: 11px;margin-top: -2px;vertical-align: middle;background-image:url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACJJREFUeNpi+P//fxgTAwPDBxDxD078RSX+YeEyDFMCIMAAI3INmXiwf2YAAAAASUVORK5CYII=");background-repeat: no-repeat, repeat-x;background-position: center center, top left;color: transparent;border: 1px solid black;border-radius: 2px;cursor: pointer;pointer-events: auto;}.ace_dark .ace_fold {}.ace_fold:hover{background-image:url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACBJREFUeNpi+P//fz4TAwPDZxDxD5X4i5fLMEwJgAADAEPVDbjNw87ZAAAAAElFTkSuQmCC");}.ace_tooltip {background-color: #FFF;background-image: linear-gradient(to bottom, transparent, rgba(0, 0, 0, 0.1));border: 1px solid gray;border-radius: 1px;box-shadow: 0 1px 2px rgba(0, 0, 0, 0.3);color: black;max-width: 100%;padding: 3px 4px;position: fixed;z-index: 999999;box-sizing: border-box;cursor: default;white-space: pre;word-wrap: break-word;line-height: normal;font-style: normal;font-weight: normal;letter-spacing: normal;pointer-events: none;}.ace_folding-enabled > .ace_gutter-cell {padding-right: 13px;}.ace_fold-widget {box-sizing: border-box;margin: 0 -12px 0 1px;display: none;width: 11px;vertical-align: top;background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42mWKsQ0AMAzC8ixLlrzQjzmBiEjp0A6WwBCSPgKAXoLkqSot7nN3yMwR7pZ32NzpKkVoDBUxKAAAAABJRU5ErkJggg==");background-repeat: no-repeat;background-position: center;border-radius: 3px;border: 1px solid transparent;cursor: pointer;}.ace_folding-enabled .ace_fold-widget {display: inline-block;   }.ace_fold-widget.ace_end {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42m3HwQkAMAhD0YzsRchFKI7sAikeWkrxwScEB0nh5e7KTPWimZki4tYfVbX+MNl4pyZXejUO1QAAAABJRU5ErkJggg==");}.ace_fold-widget.ace_closed {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAGCAYAAAAG5SQMAAAAOUlEQVR42jXKwQkAMAgDwKwqKD4EwQ26sSOkVWjgIIHAzPiCgaqiqnJHZnKICBERHN194O5b9vbLuAVRL+l0YWnZAAAAAElFTkSuQmCCXA==");}.ace_fold-widget:hover {border: 1px solid rgba(0, 0, 0, 0.3);background-color: rgba(255, 255, 255, 0.2);box-shadow: 0 1px 1px rgba(255, 255, 255, 0.7);}.ace_fold-widget:active {border: 1px solid rgba(0, 0, 0, 0.4);background-color: rgba(0, 0, 0, 0.05);box-shadow: 0 1px 1px rgba(255, 255, 255, 0.8);}.ace_dark .ace_fold-widget {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAHklEQVQIW2P4//8/AzoGEQ7oGCaLLAhWiSwB146BAQCSTPYocqT0AAAAAElFTkSuQmCC");}.ace_dark .ace_fold-widget.ace_end {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAH0lEQVQIW2P4//8/AxQ7wNjIAjDMgC4AxjCVKBirIAAF0kz2rlhxpAAAAABJRU5ErkJggg==");}.ace_dark .ace_fold-widget.ace_closed {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAFCAYAAACAcVaiAAAAHElEQVQIW2P4//+/AxAzgDADlOOAznHAKgPWAwARji8UIDTfQQAAAABJRU5ErkJggg==");}.ace_dark .ace_fold-widget:hover {box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);background-color: rgba(255, 255, 255, 0.1);}.ace_dark .ace_fold-widget:active {box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);}.ace_inline_button {border: 1px solid lightgray;display: inline-block;margin: -1px 8px;padding: 0 5px;pointer-events: auto;cursor: pointer;}.ace_inline_button:hover {border-color: gray;background: rgba(200,200,200,0.2);display: inline-block;pointer-events: auto;}.ace_fold-widget.ace_invalid {background-color: #FFB4B4;border-color: #DE5555;}.ace_fade-fold-widgets .ace_fold-widget {transition: opacity 0.4s ease 0.05s;opacity: 0;}.ace_fade-fold-widgets:hover .ace_fold-widget {transition: opacity 0.05s ease 0.05s;opacity:1;}.ace_underline {text-decoration: underline;}.ace_bold {font-weight: bold;}.ace_nobold .ace_bold {font-weight: normal;}.ace_italic {font-style: italic;}.ace_error-marker {background-color: rgba(255, 0, 0,0.2);position: absolute;z-index: 9;}.ace_highlight-marker {background-color: rgba(255, 255, 0,0.2);position: absolute;z-index: 8;}.ace_mobile-menu {position: absolute;line-height: 1.5;border-radius: 4px;-ms-user-select: none;-moz-user-select: none;-webkit-user-select: none;user-select: none;background: white;box-shadow: 1px 3px 2px grey;border: 1px solid #dcdcdc;color: black;}.ace_dark > .ace_mobile-menu {background: #333;color: #ccc;box-shadow: 1px 3px 2px grey;border: 1px solid #444;}.ace_mobile-button {padding: 2px;cursor: pointer;overflow: hidden;}.ace_mobile-button:hover {background-color: #eee;opacity:1;}.ace_mobile-button:active {background-color: #ddd;}.ace_placeholder {font-family: arial;transform: scale(0.9);transform-origin: left;white-space: pre;opacity: 0.7;margin: 0 10px;}
/*# sourceURL=ace/css/ace_editor.css */</style><meta http-equiv="X-UA-Compatible" content="IE=edge"><meta name="viewport" content="width=device-width,initial-scale=1,maximum-scale=1,user-scalable=no"><meta property="og:url" content="https://www.jdoodle.com"><meta property="og:type" content="website"><meta property="og:title" content="JDoodle - free Online  Compiler, Editor for Java, C/C++, etc"><meta property="og:description" content="JDoodle is a free Online  Compiler, Editor, IDE  for Java, C, C++, PHP, Perl, Python, Ruby and many more.  you can run your programs on the fly online and you can save and share them with others. Quick and Easy way to compile and run programs online."><meta property="og:image" content="https://www.jdoodle.com/assets/jdoodle-fb.png"><meta property="og:image:alt" content="JDoodle"><meta name="google-site-verification" content="UvObv0WXViGO2pEP8egoe3k1sXqHcsSeAfEEjnUyuXg"><meta name="msvalidate.01" content="93539EB8D681BD90594A81FCAF6560BC"><style type="text/css">svg:not(:root).svg-inline--fa {
  overflow: visible;
}

.svg-inline--fa {
  display: inline-block;
  font-size: inherit;
  height: 1em;
  overflow: visible;
  vertical-align: -0.125em;
}
.svg-inline--fa.fa-lg {
  vertical-align: -0.225em;
}
.svg-inline--fa.fa-w-1 {
  width: 0.0625em;
}
.svg-inline--fa.fa-w-2 {
  width: 0.125em;
}
.svg-inline--fa.fa-w-3 {
  width: 0.1875em;
}
.svg-inline--fa.fa-w-4 {
  width: 0.25em;
}
.svg-inline--fa.fa-w-5 {
  width: 0.3125em;
}
.svg-inline--fa.fa-w-6 {
  width: 0.375em;
}
.svg-inline--fa.fa-w-7 {
  width: 0.4375em;
}
.svg-inline--fa.fa-w-8 {
  width: 0.5em;
}
.svg-inline--fa.fa-w-9 {
  width: 0.5625em;
}
.svg-inline--fa.fa-w-10 {
  width: 0.625em;
}
.svg-inline--fa.fa-w-11 {
  width: 0.6875em;
}
.svg-inline--fa.fa-w-12 {
  width: 0.75em;
}
.svg-inline--fa.fa-w-13 {
  width: 0.8125em;
}
.svg-inline--fa.fa-w-14 {
  width: 0.875em;
}
.svg-inline--fa.fa-w-15 {
  width: 0.9375em;
}
.svg-inline--fa.fa-w-16 {
  width: 1em;
}
.svg-inline--fa.fa-w-17 {
  width: 1.0625em;
}
.svg-inline--fa.fa-w-18 {
  width: 1.125em;
}
.svg-inline--fa.fa-w-19 {
  width: 1.1875em;
}
.svg-inline--fa.fa-w-20 {
  width: 1.25em;
}
.svg-inline--fa.fa-pull-left {
  margin-right: 0.3em;
  width: auto;
}
.svg-inline--fa.fa-pull-right {
  margin-left: 0.3em;
  width: auto;
}
.svg-inline--fa.fa-border {
  height: 1.5em;
}
.svg-inline--fa.fa-li {
  width: 2em;
}
.svg-inline--fa.fa-fw {
  width: 1.25em;
}

.fa-layers svg.svg-inline--fa {
  bottom: 0;
  left: 0;
  margin: auto;
  position: absolute;
  right: 0;
  top: 0;
}

.fa-layers {
  display: inline-block;
  height: 1em;
  position: relative;
  text-align: center;
  vertical-align: -0.125em;
  width: 1em;
}
.fa-layers svg.svg-inline--fa {
  -webkit-transform-origin: center center;
          transform-origin: center center;
}

.fa-layers-counter, .fa-layers-text {
  display: inline-block;
  position: absolute;
  text-align: center;
}

.fa-layers-text {
  left: 50%;
  top: 50%;
  -webkit-transform: translate(-50%, -50%);
          transform: translate(-50%, -50%);
  -webkit-transform-origin: center center;
          transform-origin: center center;
}

.fa-layers-counter {
  background-color: #ff253a;
  border-radius: 1em;
  -webkit-box-sizing: border-box;
          box-sizing: border-box;
  color: #fff;
  height: 1.5em;
  line-height: 1;
  max-width: 5em;
  min-width: 1.5em;
  overflow: hidden;
  padding: 0.25em;
  right: 0;
  text-overflow: ellipsis;
  top: 0;
  -webkit-transform: scale(0.25);
          transform: scale(0.25);
  -webkit-transform-origin: top right;
          transform-origin: top right;
}

.fa-layers-bottom-right {
  bottom: 0;
  right: 0;
  top: auto;
  -webkit-transform: scale(0.25);
          transform: scale(0.25);
  -webkit-transform-origin: bottom right;
          transform-origin: bottom right;
}

.fa-layers-bottom-left {
  bottom: 0;
  left: 0;
  right: auto;
  top: auto;
  -webkit-transform: scale(0.25);
          transform: scale(0.25);
  -webkit-transform-origin: bottom left;
          transform-origin: bottom left;
}

.fa-layers-top-right {
  right: 0;
  top: 0;
  -webkit-transform: scale(0.25);
          transform: scale(0.25);
  -webkit-transform-origin: top right;
          transform-origin: top right;
}

.fa-layers-top-left {
  left: 0;
  right: auto;
  top: 0;
  -webkit-transform: scale(0.25);
          transform: scale(0.25);
  -webkit-transform-origin: top left;
          transform-origin: top left;
}

.fa-lg {
  font-size: 1.3333333333em;
  line-height: 0.75em;
  vertical-align: -0.0667em;
}

.fa-xs {
  font-size: 0.75em;
}

.fa-sm {
  font-size: 0.875em;
}

.fa-1x {
  font-size: 1em;
}

.fa-2x {
  font-size: 2em;
}

.fa-3x {
  font-size: 3em;
}

.fa-4x {
  font-size: 4em;
}

.fa-5x {
  font-size: 5em;
}

.fa-6x {
  font-size: 6em;
}

.fa-7x {
  font-size: 7em;
}

.fa-8x {
  font-size: 8em;
}

.fa-9x {
  font-size: 9em;
}

.fa-10x {
  font-size: 10em;
}

.fa-fw {
  text-align: center;
  width: 1.25em;
}

.fa-ul {
  list-style-type: none;
  margin-left: 2.5em;
  padding-left: 0;
}
.fa-ul > li {
  position: relative;
}

.fa-li {
  left: -2em;
  position: absolute;
  text-align: center;
  width: 2em;
  line-height: inherit;
}

.fa-border {
  border: solid 0.08em #eee;
  border-radius: 0.1em;
  padding: 0.2em 0.25em 0.15em;
}

.fa-pull-left {
  float: left;
}

.fa-pull-right {
  float: right;
}

.fa.fa-pull-left,
.fas.fa-pull-left,
.far.fa-pull-left,
.fal.fa-pull-left,
.fab.fa-pull-left {
  margin-right: 0.3em;
}
.fa.fa-pull-right,
.fas.fa-pull-right,
.far.fa-pull-right,
.fal.fa-pull-right,
.fab.fa-pull-right {
  margin-left: 0.3em;
}

.fa-spin {
  -webkit-animation: fa-spin 2s infinite linear;
          animation: fa-spin 2s infinite linear;
}

.fa-pulse {
  -webkit-animation: fa-spin 1s infinite steps(8);
          animation: fa-spin 1s infinite steps(8);
}

@-webkit-keyframes fa-spin {
  0% {
    -webkit-transform: rotate(0deg);
            transform: rotate(0deg);
  }
  100% {
    -webkit-transform: rotate(360deg);
            transform: rotate(360deg);
  }
}

@keyframes fa-spin {
  0% {
    -webkit-transform: rotate(0deg);
            transform: rotate(0deg);
  }
  100% {
    -webkit-transform: rotate(360deg);
            transform: rotate(360deg);
  }
}
.fa-rotate-90 {
  -ms-filter: "progid:DXImageTransform.Microsoft.BasicImage(rotation=1)";
  -webkit-transform: rotate(90deg);
          transform: rotate(90deg);
}

.fa-rotate-180 {
  -ms-filter: "progid:DXImageTransform.Microsoft.BasicImage(rotation=2)";
  -webkit-transform: rotate(180deg);
          transform: rotate(180deg);
}

.fa-rotate-270 {
  -ms-filter: "progid:DXImageTransform.Microsoft.BasicImage(rotation=3)";
  -webkit-transform: rotate(270deg);
          transform: rotate(270deg);
}

.fa-flip-horizontal {
  -ms-filter: "progid:DXImageTransform.Microsoft.BasicImage(rotation=0, mirror=1)";
  -webkit-transform: scale(-1, 1);
          transform: scale(-1, 1);
}

.fa-flip-vertical {
  -ms-filter: "progid:DXImageTransform.Microsoft.BasicImage(rotation=2, mirror=1)";
  -webkit-transform: scale(1, -1);
          transform: scale(1, -1);
}

.fa-flip-both, .fa-flip-horizontal.fa-flip-vertical {
  -ms-filter: "progid:DXImageTransform.Microsoft.BasicImage(rotation=2, mirror=1)";
  -webkit-transform: scale(-1, -1);
          transform: scale(-1, -1);
}

:root .fa-rotate-90,
:root .fa-rotate-180,
:root .fa-rotate-270,
:root .fa-flip-horizontal,
:root .fa-flip-vertical,
:root .fa-flip-both {
  -webkit-filter: none;
          filter: none;
}

.fa-stack {
  display: inline-block;
  height: 2em;
  position: relative;
  width: 2.5em;
}

.fa-stack-1x,
.fa-stack-2x {
  bottom: 0;
  left: 0;
  margin: auto;
  position: absolute;
  right: 0;
  top: 0;
}

.svg-inline--fa.fa-stack-1x {
  height: 1em;
  width: 1.25em;
}
.svg-inline--fa.fa-stack-2x {
  height: 2em;
  width: 2.5em;
}

.fa-inverse {
  color: #fff;
}

.sr-only {
  border: 0;
  clip: rect(0, 0, 0, 0);
  height: 1px;
  margin: -1px;
  overflow: hidden;
  padding: 0;
  position: absolute;
  width: 1px;
}

.sr-only-focusable:active, .sr-only-focusable:focus {
  clip: auto;
  height: auto;
  margin: 0;
  overflow: visible;
  position: static;
  width: auto;
}

.svg-inline--fa .fa-primary {
  fill: var(--fa-primary-color, currentColor);
  opacity: 1;
  opacity: var(--fa-primary-opacity, 1);
}

.svg-inline--fa .fa-secondary {
  fill: var(--fa-secondary-color, currentColor);
  opacity: 0.4;
  opacity: var(--fa-secondary-opacity, 0.4);
}

.svg-inline--fa.fa-swap-opacity .fa-primary {
  opacity: 0.4;
  opacity: var(--fa-secondary-opacity, 0.4);
}

.svg-inline--fa.fa-swap-opacity .fa-secondary {
  opacity: 1;
  opacity: var(--fa-primary-opacity, 1);
}

.svg-inline--fa mask .fa-primary,
.svg-inline--fa mask .fa-secondary {
  fill: black;
}

.fad.fa-inverse {
  color: #fff;
}</style><link rel="icon" href="https://www.jdoodle.com/favicon.ico"><title>Online C++ 14 Compiler - Online C++ 14 Editor -  Run C++ 14 Online - Online C++ 14 Runner</title><script src="./Min_the_Max_diff_files/osd.js.download"></script><script type="application/ld+json">{
        "@context" : "http://schema.org",
        "@type" : "SoftwareApplication",
        "name" : "JDoodle - Online Compiler And Editor",
        "image" : "https://www.jdoodle.com/img/jdoodle.113077a7.png"
      }</script><link href="https://www.jdoodle.com/css/chunk-03fa5ac1.8d5b462a.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-066bfaa8.8d5b462a.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-07b84418.64443185.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-0810aa72.8d5b462a.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-0c6b7169.b4d6b493.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-102d966e.7368196d.css" rel="prefetch"><link href="./Min_the_Max_diff_files/chunk-166eed13.bc28df53.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-16745452.091e1be2.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-19b65f1c.f8f25b15.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-1c0ee588.452ecc6e.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-1d4bce52.8d5b462a.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-211c311d.a69b954d.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-22bc8f13.8d5b462a.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-280f09d4.de99f7c0.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-283a7498.7e9083fe.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-285b3760.985a5bdf.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-2ac6b295.ebb983a0.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-30453e49.ff503450.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-3c9ac7f8.053d2932.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-3d1dfd18.44603694.css" rel="prefetch"><link href="./Min_the_Max_diff_files/chunk-3fa3b49c.c1dfd3f8.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-402847b6.c92dc27b.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-40851bb6.10774eb7.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-4a2a93f2.60917fd2.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-4a445de6.aa7c0415.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-4d0f887a.217c3f51.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-5001cd97.a69b954d.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-51026210.ae4a3be1.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-527e1f3f.fdfbcd5d.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-558d83ec.c5dbf0bb.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-578b50f5.fdfbcd5d.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-5861a136.f03a3adc.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-5bc51e22.24b53cb1.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-5cdf47d2.15a6ed00.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-62fcc2db.1eacdbd9.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-63be1ceb.5b82ccc6.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-6a82dddd.ab5d23fb.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-6b1c31fe.852641b8.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-6bb96cd4.98e804b6.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-70de9abe.bd962c0c.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-7965de6f.159ab559.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-7aac3342.60917fd2.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-7bfe3cfc.a02a8afe.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-7ea1b17d.b60953a4.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-7f25d7f6.fdfbcd5d.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-8470e514.7687c9a1.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-9c86a6bc.89b2464e.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-9ee35d30.fdfbcd5d.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-a97682f2.66bf236e.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-ac8a0d62.60917fd2.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-add4b03e.307acc73.css" rel="prefetch"><link href="./Min_the_Max_diff_files/chunk-b3638d4e.c4ed68fa.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-b9d620a6.2fd49fd4.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-ba7771fc.6ab36e44.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-c498faba.8debc8a9.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-cacedc96.317dfa84.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-cb905c58.ee5b7362.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-dd1c8980.ea80b9e9.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-e5683c8e.14d2817f.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-e6f9bb36.8b1bfea1.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-e99f3e26.ef07a9c7.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-eca6a17c.0a05d765.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-ef1f5af6.0d4afd3c.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-f4851822.a2eacd92.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-f5d928fa.0d4afd3c.css" rel="prefetch"><link href="https://www.jdoodle.com/css/chunk-fd1c93e0.6f4c0700.css" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-03fa5ac1.0cd185af.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-066bfaa8.d58a4b73.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-07b84418.95cdcf53.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-0810aa72.5acd459b.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-0c6b7169.f0e8ab4f.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-102d966e.e5a8acbd.js" rel="prefetch"><link href="./Min_the_Max_diff_files/chunk-166eed13.3fd4fa75.js.download" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-16745452.3acc36b9.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-19b65f1c.00948cde.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-1c0ee588.e978950b.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-1d4bce52.47eb32ea.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-211c311d.1844368f.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-22bc8f13.2e013123.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-251e2180.dc8eca76.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-280f09d4.52ed1dfc.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-283a7498.087da807.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-285b3760.16fb104b.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-2ac6b295.8b10dc21.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-30453e49.fdcd3da2.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-3c9ac7f8.2995f7f2.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-3d1dfd18.806e82b2.js" rel="prefetch"><link href="./Min_the_Max_diff_files/chunk-3fa3b49c.d6b20dfc.js.download" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-402847b6.31b0e7b6.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-40851bb6.0ac60333.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-4a2a93f2.c9c8a81f.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-4a445de6.3d7a29a2.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-4d0f887a.652cd0ad.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-5001cd97.4cfc9191.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-51026210.bb3c700c.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-527e1f3f.2d1fcc30.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-558d83ec.270176a0.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-578b50f5.2166ceb1.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-5861a136.03d7f889.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-5bc51e22.f77a97ee.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-5c504b38.e8466b8e.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-5cdf47d2.b31c63a5.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-62fcc2db.de7257f1.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-63be1ceb.ec85a228.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-69d01b1e.9d0f6d4d.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-6a82dddd.82478c31.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-6b1c31fe.e79f4a47.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-6bb96cd4.6c7e2c99.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-70de9abe.968ec816.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-7965de6f.10a82d07.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-7aac3342.96aeafd9.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-7bfe3cfc.96b30b7e.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-7db688a6.85592f1d.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-7ea1b17d.b68ceed9.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-7f25d7f6.bd959c5c.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-8470e514.1d4413dd.js" rel="prefetch"><link href="./Min_the_Max_diff_files/chunk-8879ad6a.c856adc3.js.download" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-9c86a6bc.b4a42fe3.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-9ee35d30.e4606ada.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-a97682f2.761bf267.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-ac8a0d62.0c50589b.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-add4b03e.a7587eb0.js" rel="prefetch"><link href="./Min_the_Max_diff_files/chunk-b3638d4e.7deaaaf6.js.download" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-b9d620a6.c4b41850.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-ba7771fc.420d6169.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-c498faba.29163129.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-cacedc96.45e6b57f.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-cb905c58.6812a89c.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-dd1c8980.b14e24f3.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-e5683c8e.df1b1e3b.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-e6f9bb36.f3d1fe29.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-e99f3e26.84fad353.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-eca6a17c.8d4d8615.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-ef1f5af6.f080e042.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-f4851822.ad250d35.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-f5d928fa.d5baa336.js" rel="prefetch"><link href="https://www.jdoodle.com/js/chunk-fd1c93e0.ae614ea7.js" rel="prefetch"><link href="./Min_the_Max_diff_files/app.34b057dd.css" rel="preload" as="style"><link href="./Min_the_Max_diff_files/chunk-vendors.12677bd1.css" rel="preload" as="style"><link href="./Min_the_Max_diff_files/app.45892dd4.js.download" rel="preload" as="script"><link href="./Min_the_Max_diff_files/chunk-vendors.a6d11d10.js.download" rel="preload" as="script"><link href="./Min_the_Max_diff_files/chunk-vendors.12677bd1.css" rel="stylesheet"><link href="./Min_the_Max_diff_files/app.34b057dd.css" rel="stylesheet"><link rel="stylesheet" type="text/css" href="./Min_the_Max_diff_files/chunk-3fa3b49c.c1dfd3f8.css"><script charset="utf-8" src="./Min_the_Max_diff_files/chunk-3fa3b49c.d6b20dfc.js.download"></script><link rel="stylesheet" type="text/css" href="./Min_the_Max_diff_files/chunk-166eed13.bc28df53.css"><script charset="utf-8" src="./Min_the_Max_diff_files/chunk-166eed13.3fd4fa75.js.download"></script><script charset="utf-8" src="./Min_the_Max_diff_files/chunk-8879ad6a.c856adc3.js.download"></script><link rel="stylesheet" type="text/css" href="./Min_the_Max_diff_files/chunk-b3638d4e.c4ed68fa.css"><script charset="utf-8" src="./Min_the_Max_diff_files/chunk-b3638d4e.7deaaaf6.js.download"></script><style type="text/css">.Cookie{position:fixed;overflow:hidden;-webkit-box-sizing:border-box;box-sizing:border-box;z-index:9999;width:100%;display:-webkit-box;display:-ms-flexbox;display:flex;-webkit-box-pack:justify;-ms-flex-pack:justify;justify-content:space-between;-webkit-box-align:baseline;-ms-flex-align:baseline;align-items:baseline;-webkit-box-orient:vertical;-webkit-box-direction:normal;-ms-flex-direction:column;flex-direction:column}.Cookie>*{margin:.9375rem 0;-ms-flex-item-align:center;align-self:center}@media screen and (min-width:48rem){.Cookie{-webkit-box-orient:horizontal;-webkit-box-direction:normal;-ms-flex-flow:row;flex-flow:row}.Cookie>*{margin:0}}.Cookie--top{top:0;left:0;right:0}.Cookie--bottom{bottom:0;left:0;right:0}.Cookie__buttons{display:-webkit-box;display:-ms-flexbox;display:flex;-webkit-box-orient:vertical;-webkit-box-direction:normal;-ms-flex-direction:column;flex-direction:column}.Cookie__buttons>*{margin:.3125rem 0}@media screen and (min-width:48rem){.Cookie__buttons{-webkit-box-orient:horizontal;-webkit-box-direction:normal;-ms-flex-direction:row;flex-direction:row}.Cookie__buttons>*{margin:0 .9375rem}}.Cookie__button{cursor:pointer;-ms-flex-item-align:center;align-self:center;white-space:nowrap}.Cookie--base{background:#f1f1f1;color:#232323;padding:1.25em}.Cookie--base .Cookie__button{background:#97d058;padding:.625em 3.125em;color:#fff;border-radius:0;border:0;font-size:1em}.Cookie--base .Cookie__button:hover{background:#7ebf36}.Cookie--base--rounded{background:#f1f1f1;color:#232323;padding:1.25em}.Cookie--base--rounded .Cookie__button{background:#97d058;padding:.625em 3.125em;color:#fff;border-radius:20px;border:0;font-size:1em}.Cookie--base--rounded .Cookie__button:hover{background:#7ebf36}.Cookie--blood-orange{background:#424851;color:#fff;padding:1.25em}.Cookie--blood-orange .Cookie__button{background:#e76a68;padding:.625em 3.125em;color:#fff;border-radius:0;border:0;font-size:1em}.Cookie--blood-orange .Cookie__button:hover{background:#e03f3c}.Cookie--blood-orange--rounded{background:#424851;color:#fff;padding:1.25em}.Cookie--blood-orange--rounded .Cookie__button{background:#e76a68;padding:.625em 3.125em;color:#fff;border-radius:20px;border:0;font-size:1em}.Cookie--blood-orange--rounded .Cookie__button:hover{background:#e03f3c}.Cookie--dark-lime{background:#424851;color:#fff;padding:1.25em}.Cookie--dark-lime .Cookie__button{background:#97d058;padding:.625em 3.125em;color:#fff;border-radius:0;border:0;font-size:1em}.Cookie--dark-lime .Cookie__button:hover{background:#7ebf36}.Cookie--dark-lime--rounded{background:#424851;color:#fff;padding:1.25em}.Cookie--dark-lime--rounded .Cookie__button{background:#97d058;padding:.625em 3.125em;color:#fff;border-radius:20px;border:0;font-size:1em}.Cookie--dark-lime--rounded .Cookie__button:hover{background:#7ebf36}.Cookie--royal{background:#fbc227;color:#232323;padding:1.25em}.Cookie--royal .Cookie__button{background:#726cea;padding:.625em 3.125em;color:#fff;border-radius:0;border:0;font-size:1em}.Cookie--royal .Cookie__button:hover{background:#473fe4}.Cookie--royal--rounded{background:#fbc227;color:#232323;padding:1.25em}.Cookie--royal--rounded .Cookie__button{background:#726cea;padding:.625em 3.125em;color:#fff;border-radius:20px;border:0;font-size:1em}.Cookie--royal--rounded .Cookie__button:hover{background:#473fe4}.slideFromTop-enter,.slideFromTop-leave-to{-webkit-transform:translateY(-12.5em);transform:translateY(-12.5em)}.slideFromTop-enter-to,.slideFromTop-leave{-webkit-transform:translate(0);transform:translate(0)}.slideFromBottom-enter,.slideFromBottom-leave-to{-webkit-transform:translateY(12.5em);transform:translateY(12.5em)}.slideFromBottom-enter-to,.slideFromBottom-leave{-webkit-transform:translate(0);transform:translate(0)}.slideFromBottom-enter-active,.slideFromBottom-leave-active,.slideFromTop-enter-active,.slideFromTop-leave-active{-webkit-transition:-webkit-transform .4s ease-in;transition:-webkit-transform .4s ease-in;transition:transform .4s ease-in;transition:transform .4s ease-in,-webkit-transform .4s ease-in}.fade-enter-active,.fade-leave-active{-webkit-transition:opacity .5s;transition:opacity .5s}.fade-enter,.fade-leave-to{opacity:0}</style><script src="./Min_the_Max_diff_files/theme-xcode.js.download"></script><script src="./Min_the_Max_diff_files/mode-c_cpp.js.download"></script><meta name="description" content="Online C++ 14 Compiler - Online C++ 14 Editor - Online C++ 14 IDE -  C++ 14 Coding Online - Online C++ 14 Runner - Share Save C++ 14 Program online" data-vue-router-controlled=""><meta name="keywords" content="Online C++ 14 Compiler - Online C++ 14 Editor - Online C++ 14 IDE - C++ 14 Coding Online - Online C++ 14 Runner -  Share Save C++ 14 online" data-vue-router-controlled=""><style type="text/css">.Cookie{position:fixed;overflow:hidden;-webkit-box-sizing:border-box;box-sizing:border-box;z-index:9999;width:100%;display:-webkit-box;display:-ms-flexbox;display:flex;-webkit-box-pack:justify;-ms-flex-pack:justify;justify-content:space-between;-webkit-box-align:baseline;-ms-flex-align:baseline;align-items:baseline;-webkit-box-orient:vertical;-webkit-box-direction:normal;-ms-flex-direction:column;flex-direction:column}.Cookie>*{margin:.9375rem 0;-ms-flex-item-align:center;align-self:center}@media screen and (min-width:48rem){.Cookie{-webkit-box-orient:horizontal;-webkit-box-direction:normal;-ms-flex-flow:row;flex-flow:row}.Cookie>*{margin:0}}.Cookie--top{top:0;left:0;right:0}.Cookie--bottom{bottom:0;left:0;right:0}.Cookie__buttons{display:-webkit-box;display:-ms-flexbox;display:flex;-webkit-box-orient:vertical;-webkit-box-direction:normal;-ms-flex-direction:column;flex-direction:column}.Cookie__buttons>*{margin:.3125rem 0}@media screen and (min-width:48rem){.Cookie__buttons{-webkit-box-orient:horizontal;-webkit-box-direction:normal;-ms-flex-direction:row;flex-direction:row}.Cookie__buttons>*{margin:0 .9375rem}}.Cookie__button{cursor:pointer;-ms-flex-item-align:center;align-self:center;white-space:nowrap}.Cookie--base{background:#f1f1f1;color:#232323;padding:1.25em}.Cookie--base .Cookie__button{background:#97d058;padding:.625em 3.125em;color:#fff;border-radius:0;border:0;font-size:1em}.Cookie--base .Cookie__button:hover{background:#7ebf36}.Cookie--base--rounded{background:#f1f1f1;color:#232323;padding:1.25em}.Cookie--base--rounded .Cookie__button{background:#97d058;padding:.625em 3.125em;color:#fff;border-radius:20px;border:0;font-size:1em}.Cookie--base--rounded .Cookie__button:hover{background:#7ebf36}.Cookie--blood-orange{background:#424851;color:#fff;padding:1.25em}.Cookie--blood-orange .Cookie__button{background:#e76a68;padding:.625em 3.125em;color:#fff;border-radius:0;border:0;font-size:1em}.Cookie--blood-orange .Cookie__button:hover{background:#e03f3c}.Cookie--blood-orange--rounded{background:#424851;color:#fff;padding:1.25em}.Cookie--blood-orange--rounded .Cookie__button{background:#e76a68;padding:.625em 3.125em;color:#fff;border-radius:20px;border:0;font-size:1em}.Cookie--blood-orange--rounded .Cookie__button:hover{background:#e03f3c}.Cookie--dark-lime{background:#424851;color:#fff;padding:1.25em}.Cookie--dark-lime .Cookie__button{background:#97d058;padding:.625em 3.125em;color:#fff;border-radius:0;border:0;font-size:1em}.Cookie--dark-lime .Cookie__button:hover{background:#7ebf36}.Cookie--dark-lime--rounded{background:#424851;color:#fff;padding:1.25em}.Cookie--dark-lime--rounded .Cookie__button{background:#97d058;padding:.625em 3.125em;color:#fff;border-radius:20px;border:0;font-size:1em}.Cookie--dark-lime--rounded .Cookie__button:hover{background:#7ebf36}.Cookie--royal{background:#fbc227;color:#232323;padding:1.25em}.Cookie--royal .Cookie__button{background:#726cea;padding:.625em 3.125em;color:#fff;border-radius:0;border:0;font-size:1em}.Cookie--royal .Cookie__button:hover{background:#473fe4}.Cookie--royal--rounded{background:#fbc227;color:#232323;padding:1.25em}.Cookie--royal--rounded .Cookie__button{background:#726cea;padding:.625em 3.125em;color:#fff;border-radius:20px;border:0;font-size:1em}.Cookie--royal--rounded .Cookie__button:hover{background:#473fe4}.slideFromTop-enter,.slideFromTop-leave-to{-webkit-transform:translateY(-12.5em);transform:translateY(-12.5em)}.slideFromTop-enter-to,.slideFromTop-leave{-webkit-transform:translate(0);transform:translate(0)}.slideFromBottom-enter,.slideFromBottom-leave-to{-webkit-transform:translateY(12.5em);transform:translateY(12.5em)}.slideFromBottom-enter-to,.slideFromBottom-leave{-webkit-transform:translate(0);transform:translate(0)}.slideFromBottom-enter-active,.slideFromBottom-leave-active,.slideFromTop-enter-active,.slideFromTop-leave-active{-webkit-transition:-webkit-transform .4s ease-in;transition:-webkit-transform .4s ease-in;transition:transform .4s ease-in;transition:transform .4s ease-in,-webkit-transform .4s ease-in}.fade-enter-active,.fade-leave-active{-webkit-transition:opacity .5s;transition:opacity .5s}.fade-enter,.fade-leave-to{opacity:0}</style><script async="" type="text/javascript" src="./Min_the_Max_diff_files/gpt.js.download" dropped-by="bsaoptimize"></script><meta http-equiv="origin-trial" content="A2shzsdPO+RKe83bUqT9oVkYwGZN6j9O7nrcOASNFPuQz8HefgVYb9qAqn6coNCSDIRtXoi6ybCrjEsYh3caFgIAAAB7eyJvcmlnaW4iOiJodHRwczovL2RvdWJsZWNsaWNrLm5ldDo0NDMiLCJmZWF0dXJlIjoiVHJ1c3RUb2tlbnMiLCJleHBpcnkiOjE2MTM0OTU4NjgsImlzU3ViZG9tYWluIjp0cnVlLCJpc1RoaXJkUGFydHkiOnRydWV9"><script src="./Min_the_Max_diff_files/pubads_impl_2021011204.js.download" async=""></script><script src="./Min_the_Max_diff_files/theme-xcode.js.download"></script><script src="./Min_the_Max_diff_files/mode-c_cpp.js.download"></script><style>[data-ea-publisher].loaded,[data-ea-type].loaded{font-size:14px;font-family:-apple-system, BlinkMacSystemFont, Segoe UI, Roboto, Helvetica Neue, Arial, Noto Sans, sans-serif, Apple Color Emoji, Segoe UI Emoji, Segoe UI Symbol, Noto Color Emoji;font-weight:normal;font-style:normal;leter-spacing:0px;vertical-align:baseline;line-height:1.3em}[data-ea-publisher].loaded a,[data-ea-type].loaded a{text-decoration:none}[data-ea-publisher].loaded .ea-pixel,[data-ea-type].loaded .ea-pixel{display:none}[data-ea-publisher].loaded .ea-content,[data-ea-type].loaded .ea-content{margin:1em 1em 0.5em 1em;padding:1em;background:rgba(0,0,0,0.03);color:#505050}[data-ea-publisher].loaded .ea-content a:link,[data-ea-type].loaded .ea-content a:link{color:#505050}[data-ea-publisher].loaded .ea-content a:visited,[data-ea-type].loaded .ea-content a:visited{color:#505050}[data-ea-publisher].loaded .ea-content a:hover,[data-ea-type].loaded .ea-content a:hover{color:#373737}[data-ea-publisher].loaded .ea-content a:active,[data-ea-type].loaded .ea-content a:active{color:#373737}[data-ea-publisher].loaded .ea-content a strong,[data-ea-publisher].loaded .ea-content a b,[data-ea-type].loaded .ea-content a strong,[data-ea-type].loaded .ea-content a b{color:#088cdb}[data-ea-publisher].loaded .ea-callout a:link,[data-ea-type].loaded .ea-callout a:link{color:#6a6a6a}[data-ea-publisher].loaded .ea-callout a:visited,[data-ea-type].loaded .ea-callout a:visited{color:#6a6a6a}[data-ea-publisher].loaded .ea-callout a:hover,[data-ea-type].loaded .ea-callout a:hover{color:#505050}[data-ea-publisher].loaded .ea-callout a:active,[data-ea-type].loaded .ea-callout a:active{color:#505050}[data-ea-publisher].loaded .ea-callout a strong,[data-ea-publisher].loaded .ea-callout a b,[data-ea-type].loaded .ea-callout a strong,[data-ea-type].loaded .ea-callout a b{color:#088cdb}[data-ea-publisher].loaded .ea-callout a,[data-ea-type].loaded .ea-callout a{font-size:0.8em}[data-ea-publisher].loaded.dark .ea-content,[data-ea-type].loaded.dark .ea-content{background:rgba(255,255,255,0.05);color:#dcdcdc}[data-ea-publisher].loaded.dark .ea-content a:link,[data-ea-type].loaded.dark .ea-content a:link{color:#dcdcdc}[data-ea-publisher].loaded.dark .ea-content a:visited,[data-ea-type].loaded.dark .ea-content a:visited{color:#dcdcdc}[data-ea-publisher].loaded.dark .ea-content a:hover,[data-ea-type].loaded.dark .ea-content a:hover{color:#f6f6f6}[data-ea-publisher].loaded.dark .ea-content a:active,[data-ea-type].loaded.dark .ea-content a:active{color:#f6f6f6}[data-ea-publisher].loaded.dark .ea-content a strong,[data-ea-publisher].loaded.dark .ea-content a b,[data-ea-type].loaded.dark .ea-content a strong,[data-ea-type].loaded.dark .ea-content a b{color:#50baf9}[data-ea-publisher].loaded.dark .ea-callout a:link,[data-ea-type].loaded.dark .ea-callout a:link{color:#c3c3c3}[data-ea-publisher].loaded.dark .ea-callout a:visited,[data-ea-type].loaded.dark .ea-callout a:visited{color:#c3c3c3}[data-ea-publisher].loaded.dark .ea-callout a:hover,[data-ea-type].loaded.dark .ea-callout a:hover{color:#dcdcdc}[data-ea-publisher].loaded.dark .ea-callout a:active,[data-ea-type].loaded.dark .ea-callout a:active{color:#dcdcdc}[data-ea-publisher].loaded.dark .ea-callout a strong,[data-ea-publisher].loaded.dark .ea-callout a b,[data-ea-type].loaded.dark .ea-callout a strong,[data-ea-type].loaded.dark .ea-callout a b{color:#50baf9}[data-ea-publisher].loaded .ea-content,[data-ea-type].loaded .ea-content{border:0px;border-radius:3px;box-shadow:0px 2px 3px rgba(0,0,0,0.15)}[data-ea-publisher].loaded.raised .ea-content,[data-ea-type].loaded.raised .ea-content{border:0px;border-radius:3px;box-shadow:0px 2px 3px rgba(0,0,0,0.15)}[data-ea-publisher].loaded.bordered .ea-content,[data-ea-type].loaded.bordered .ea-content{border:1px solid rgba(0,0,0,0.04);border-radius:3px;box-shadow:none}[data-ea-publisher].loaded.bordered.dark .ea-content,[data-ea-type].loaded.bordered.dark .ea-content{border:1px solid rgba(255,255,255,0.07)}[data-ea-publisher].loaded.flat .ea-content,[data-ea-type].loaded.flat .ea-content{border:0px;border-radius:3px;box-shadow:none}[data-ea-type="image"].loaded,[data-ea-publisher]:not([data-ea-type]).loaded,.ea-type-image{display:inline-block}[data-ea-type="image"].loaded .ea-content,[data-ea-publisher]:not([data-ea-type]).loaded .ea-content,.ea-type-image .ea-content{max-width:180px;overflow:auto;text-align:center}[data-ea-type="image"].loaded .ea-content>a>img,[data-ea-publisher]:not([data-ea-type]).loaded .ea-content>a>img,.ea-type-image .ea-content>a>img{width:120px;height:90px;display:inline-block}[data-ea-type="image"].loaded .ea-content>.ea-text,[data-ea-publisher]:not([data-ea-type]).loaded .ea-content>.ea-text,.ea-type-image .ea-content>.ea-text{margin-top:1em;font-size:1em;text-align:center}[data-ea-type="image"].loaded .ea-callout,[data-ea-publisher]:not([data-ea-type]).loaded .ea-callout,.ea-type-image .ea-callout{max-width:180px;margin:0em 1em 1em 1em;padding-left:1em;padding-right:1em;font-style:italic;text-align:right}[data-ea-type="image"].loaded.horizontal .ea-content,[data-ea-publisher]:not([data-ea-type]).loaded.horizontal .ea-content,.ea-type-image.horizontal .ea-content{max-width:320px}[data-ea-type="image"].loaded.horizontal .ea-content>a>img,[data-ea-publisher]:not([data-ea-type]).loaded.horizontal .ea-content>a>img,.ea-type-image.horizontal .ea-content>a>img{float:left;margin-right:1em}[data-ea-type="image"].loaded.horizontal .ea-content .ea-text,[data-ea-publisher]:not([data-ea-type]).loaded.horizontal .ea-content .ea-text,.ea-type-image.horizontal .ea-content .ea-text{margin-top:0em;text-align:left;overflow:auto}[data-ea-type="image"].loaded.horizontal .ea-callout,[data-ea-publisher]:not([data-ea-type]).loaded.horizontal .ea-callout,.ea-type-image.horizontal .ea-callout{max-width:320px;text-align:right}[data-ea-type="text"].loaded,.ea-type-text{font-size:14px}[data-ea-type="text"].loaded .ea-content,.ea-type-text .ea-content{text-align:left}[data-ea-type="text"].loaded .ea-callout,.ea-type-text .ea-callout{margin:0.5em 1em 1em 1em;padding-left:1em;padding-right:1em;text-align:right;font-style:italic}
</style><style>[data-ea-publisher].loaded,[data-ea-type].loaded{font-size:14px;font-family:-apple-system, BlinkMacSystemFont, Segoe UI, Roboto, Helvetica Neue, Arial, Noto Sans, sans-serif, Apple Color Emoji, Segoe UI Emoji, Segoe UI Symbol, Noto Color Emoji;font-weight:normal;font-style:normal;leter-spacing:0px;vertical-align:baseline;line-height:1.3em}[data-ea-publisher].loaded a,[data-ea-type].loaded a{text-decoration:none}[data-ea-publisher].loaded .ea-pixel,[data-ea-type].loaded .ea-pixel{display:none}[data-ea-publisher].loaded .ea-content,[data-ea-type].loaded .ea-content{margin:1em 1em 0.5em 1em;padding:1em;background:rgba(0,0,0,0.03);color:#505050}[data-ea-publisher].loaded .ea-content a:link,[data-ea-type].loaded .ea-content a:link{color:#505050}[data-ea-publisher].loaded .ea-content a:visited,[data-ea-type].loaded .ea-content a:visited{color:#505050}[data-ea-publisher].loaded .ea-content a:hover,[data-ea-type].loaded .ea-content a:hover{color:#373737}[data-ea-publisher].loaded .ea-content a:active,[data-ea-type].loaded .ea-content a:active{color:#373737}[data-ea-publisher].loaded .ea-content a strong,[data-ea-publisher].loaded .ea-content a b,[data-ea-type].loaded .ea-content a strong,[data-ea-type].loaded .ea-content a b{color:#088cdb}[data-ea-publisher].loaded .ea-callout a:link,[data-ea-type].loaded .ea-callout a:link{color:#6a6a6a}[data-ea-publisher].loaded .ea-callout a:visited,[data-ea-type].loaded .ea-callout a:visited{color:#6a6a6a}[data-ea-publisher].loaded .ea-callout a:hover,[data-ea-type].loaded .ea-callout a:hover{color:#505050}[data-ea-publisher].loaded .ea-callout a:active,[data-ea-type].loaded .ea-callout a:active{color:#505050}[data-ea-publisher].loaded .ea-callout a strong,[data-ea-publisher].loaded .ea-callout a b,[data-ea-type].loaded .ea-callout a strong,[data-ea-type].loaded .ea-callout a b{color:#088cdb}[data-ea-publisher].loaded .ea-callout a,[data-ea-type].loaded .ea-callout a{font-size:0.8em}[data-ea-publisher].loaded.dark .ea-content,[data-ea-type].loaded.dark .ea-content{background:rgba(255,255,255,0.05);color:#dcdcdc}[data-ea-publisher].loaded.dark .ea-content a:link,[data-ea-type].loaded.dark .ea-content a:link{color:#dcdcdc}[data-ea-publisher].loaded.dark .ea-content a:visited,[data-ea-type].loaded.dark .ea-content a:visited{color:#dcdcdc}[data-ea-publisher].loaded.dark .ea-content a:hover,[data-ea-type].loaded.dark .ea-content a:hover{color:#f6f6f6}[data-ea-publisher].loaded.dark .ea-content a:active,[data-ea-type].loaded.dark .ea-content a:active{color:#f6f6f6}[data-ea-publisher].loaded.dark .ea-content a strong,[data-ea-publisher].loaded.dark .ea-content a b,[data-ea-type].loaded.dark .ea-content a strong,[data-ea-type].loaded.dark .ea-content a b{color:#50baf9}[data-ea-publisher].loaded.dark .ea-callout a:link,[data-ea-type].loaded.dark .ea-callout a:link{color:#c3c3c3}[data-ea-publisher].loaded.dark .ea-callout a:visited,[data-ea-type].loaded.dark .ea-callout a:visited{color:#c3c3c3}[data-ea-publisher].loaded.dark .ea-callout a:hover,[data-ea-type].loaded.dark .ea-callout a:hover{color:#dcdcdc}[data-ea-publisher].loaded.dark .ea-callout a:active,[data-ea-type].loaded.dark .ea-callout a:active{color:#dcdcdc}[data-ea-publisher].loaded.dark .ea-callout a strong,[data-ea-publisher].loaded.dark .ea-callout a b,[data-ea-type].loaded.dark .ea-callout a strong,[data-ea-type].loaded.dark .ea-callout a b{color:#50baf9}[data-ea-publisher].loaded .ea-content,[data-ea-type].loaded .ea-content{border:0px;border-radius:3px;box-shadow:0px 2px 3px rgba(0,0,0,0.15)}[data-ea-publisher].loaded.raised .ea-content,[data-ea-type].loaded.raised .ea-content{border:0px;border-radius:3px;box-shadow:0px 2px 3px rgba(0,0,0,0.15)}[data-ea-publisher].loaded.bordered .ea-content,[data-ea-type].loaded.bordered .ea-content{border:1px solid rgba(0,0,0,0.04);border-radius:3px;box-shadow:none}[data-ea-publisher].loaded.bordered.dark .ea-content,[data-ea-type].loaded.bordered.dark .ea-content{border:1px solid rgba(255,255,255,0.07)}[data-ea-publisher].loaded.flat .ea-content,[data-ea-type].loaded.flat .ea-content{border:0px;border-radius:3px;box-shadow:none}[data-ea-type="image"].loaded,[data-ea-publisher]:not([data-ea-type]).loaded,.ea-type-image{display:inline-block}[data-ea-type="image"].loaded .ea-content,[data-ea-publisher]:not([data-ea-type]).loaded .ea-content,.ea-type-image .ea-content{max-width:180px;overflow:auto;text-align:center}[data-ea-type="image"].loaded .ea-content>a>img,[data-ea-publisher]:not([data-ea-type]).loaded .ea-content>a>img,.ea-type-image .ea-content>a>img{width:120px;height:90px;display:inline-block}[data-ea-type="image"].loaded .ea-content>.ea-text,[data-ea-publisher]:not([data-ea-type]).loaded .ea-content>.ea-text,.ea-type-image .ea-content>.ea-text{margin-top:1em;font-size:1em;text-align:center}[data-ea-type="image"].loaded .ea-callout,[data-ea-publisher]:not([data-ea-type]).loaded .ea-callout,.ea-type-image .ea-callout{max-width:180px;margin:0em 1em 1em 1em;padding-left:1em;padding-right:1em;font-style:italic;text-align:right}[data-ea-type="image"].loaded.horizontal .ea-content,[data-ea-publisher]:not([data-ea-type]).loaded.horizontal .ea-content,.ea-type-image.horizontal .ea-content{max-width:320px}[data-ea-type="image"].loaded.horizontal .ea-content>a>img,[data-ea-publisher]:not([data-ea-type]).loaded.horizontal .ea-content>a>img,.ea-type-image.horizontal .ea-content>a>img{float:left;margin-right:1em}[data-ea-type="image"].loaded.horizontal .ea-content .ea-text,[data-ea-publisher]:not([data-ea-type]).loaded.horizontal .ea-content .ea-text,.ea-type-image.horizontal .ea-content .ea-text{margin-top:0em;text-align:left;overflow:auto}[data-ea-type="image"].loaded.horizontal .ea-callout,[data-ea-publisher]:not([data-ea-type]).loaded.horizontal .ea-callout,.ea-type-image.horizontal .ea-callout{max-width:320px;text-align:right}[data-ea-type="text"].loaded,.ea-type-text{font-size:14px}[data-ea-type="text"].loaded .ea-content,.ea-type-text .ea-content{text-align:left}[data-ea-type="text"].loaded .ea-callout,.ea-type-text .ea-callout{margin:0.5em 1em 1em 1em;padding-left:1em;padding-right:1em;text-align:right;font-style:italic}
</style><script src="./Min_the_Max_diff_files/saved_resource" type="text/javascript" async=""></script><script src="./Min_the_Max_diff_files/saved_resource(1)" type="text/javascript" async=""></script><script async="" type="text/javascript" src="./Min_the_Max_diff_files/gpt.js.download" dropped-by="bsaoptimize"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="prefetch" href="https://d85907195f98af0aa249a4020446e438.safeframe.googlesyndication.com/safeframe/1-0-37/html/container.html"><link rel="prefetch" href="https://tpc.googlesyndication.com/safeframe/1-0-37/html/container.html"><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(4).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(4).txt"></script><link rel="preload" href="./Min_the_Max_diff_files/f(5).txt" as="script"><script type="text/javascript" src="./Min_the_Max_diff_files/f(5).txt"></script></head><body><noscript><strong>We're sorry but jdoodle-spa doesn't work properly without JavaScript enabled. Please enable it to continue.</strong></noscript><div id="app" class=""><nav data-v-05f73c3c="" class="jd-nav is-marginless has-background-white-ter" msg="Welcome to JDoodle.com"><div data-v-05f73c3c="" class="level is-mobile is-marginless"><div data-v-05f73c3c="" class="level-left"><div data-v-05f73c3c="" class="level-item is-vertical"><a data-v-05f73c3c="" href="https://www.jdoodle.com/" class="router-link-active"><img data-v-05f73c3c="" src="./Min_the_Max_diff_files/jdoodle.113077a7.png" alt="JDoodle" width="100" height="20" class="logo"></a></div></div><div data-v-05f73c3c="" class="level-right is-hidden-print"><div data-v-05f73c3c="" class="level-item"><button data-v-05f73c3c="" class="button share-button is-rounded"><svg data-v-05f73c3c="" aria-hidden="true" focusable="false" data-prefix="fas" data-icon="share" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 512 512" class="share-button-icon svg-inline--fa fa-share fa-w-16"><path data-v-05f73c3c="" fill="currentColor" d="M503.691 189.836L327.687 37.851C312.281 24.546 288 35.347 288 56.015v80.053C127.371 137.907 0 170.1 0 322.326c0 61.441 39.581 122.309 83.333 154.132 13.653 9.931 33.111-2.533 28.077-18.631C66.066 312.814 132.917 274.316 288 272.085V360c0 20.7 24.3 31.453 39.687 18.164l176.004-152c11.071-9.562 11.086-26.753 0-36.328z" class=""></path></svg></button></div><div data-v-05f73c3c="" class="level-item"><button data-v-05f73c3c="" class="button user-button is-rounded"><svg data-v-05f73c3c="" aria-hidden="true" focusable="false" data-prefix="fas" data-icon="bars" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 448 512" class="share-button-icon svg-inline--fa fa-bars fa-w-14"><path data-v-05f73c3c="" fill="currentColor" d="M16 132h416c8.837 0 16-7.163 16-16V76c0-8.837-7.163-16-16-16H16C7.163 60 0 67.163 0 76v40c0 8.837 7.163 16 16 16zm0 160h416c8.837 0 16-7.163 16-16v-40c0-8.837-7.163-16-16-16H16c-8.837 0-16 7.163-16 16v40c0 8.837 7.163 16 16 16zm0 160h416c8.837 0 16-7.163 16-16v-40c0-8.837-7.163-16-16-16H16c-8.837 0-16 7.163-16 16v40c0 8.837 7.163 16 16 16z" class=""></path></svg></button></div><div data-v-05f73c3c="" class="level-item"><button data-v-05f73c3c="" class="button is-info has-text-white sign-in-button"><strong data-v-05f73c3c="">Sign In</strong></button><!----></div></div></div><!----></nav><div class="app-wrap"><div data-v-a7f45320="" class="home-container"><div data-v-a7f45320="" class="is-hidden-print has-text-centered vilambaram-area-top"><div data-v-a7f45320="" id="bsa-zone_1595867813696-0_123456" data-google-query-id="CPrvqISfsu4CFe0ZtwAdOMIGDA"><div id="google_ads_iframe_/8691100/JDoodle_S2S_InContent_ROS_Pos1_0__container__" style="border: 0pt none; display: inline-block; width: 728px; height: 90px;"><iframe frameborder="0" src="./Min_the_Max_diff_files/container.html" id="google_ads_iframe_/8691100/JDoodle_S2S_InContent_ROS_Pos1_0" title="3rd party ad content" name="" scrolling="no" marginwidth="0" marginheight="0" width="728" height="90" data-is-safeframe="true" sandbox="allow-forms allow-popups allow-popups-to-escape-sandbox allow-same-origin allow-scripts allow-top-navigation-by-user-activation" data-google-container-id="8b" style="border: 0px; vertical-align: bottom;" data-load-complete="true"></iframe></div></div></div><div data-v-a7f45320="" class="has-text-centered title-section is-marginless"><h1 data-v-a7f45320="" class="title is-marginless custom-grey"><span data-v-a7f45320="">Online</span> C++ 14 <span data-v-a7f45320="">Compiler</span><span data-v-a7f45320=""> IDE</span></h1><!----></div><!----><!----><!----><div data-v-a7f45320="" class="box no-border-print code-editor-box"><div data-v-a7f45320="" id="ide-left" class="ide-left"><!----><div data-v-a7f45320="" class="is-flex ide-part is-mobile"><!----><div data-v-a7f45320="" id="ide-code" class="split is-marginless is-paddingless"><!----><div data-v-a7f45320="" id="code" class="code-editor no-border-print ace_editor ace-xcode ace_focus" style="font-size: 12px; height: 572px;" draggable="false"><textarea class="ace_text-input" wrap="off" autocorrect="off" autocapitalize="off" spellcheck="false" style="opacity: 0; font-size: 1px; height: 1px; width: 1px; top: 448px; left: 222px;"></textarea><div class="ace_gutter" aria-hidden="true" style="display: block; left: 0px; width: 47px;"><div class="ace_layer ace_gutter-layer ace_folding-enabled" style="height: 1e+06px; top: 0px; left: 0px; width: 47px;"><div class="ace_gutter-cell " style="height: 14px; top: 0px;">1<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 14px;">2<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 28px;">3<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 42px;">4<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 56px;">5<span style="display: inline-block; height: 14px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 70px;">6<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 84px;">7<span style="display: none; height: 14px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 98px;">8<span style="display: none; height: 14px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 112px;">9<span style="display: none; height: 14px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 126px;">10<span style="display: inline-block; height: 14px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 140px;">11<span style="display: inline-block; height: 14px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 154px;">12<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 168px;">13<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 182px;">14<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 196px;">15<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 210px;">16<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 224px;">17<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 238px;">18<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 252px;">19<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 266px;">20<span class="ace_fold-widget ace_start ace_open" style="height: 14px; display: inline-block;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 280px;">21<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 294px;">22<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 308px;">23<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 322px;">24<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 336px;">25<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 350px;">26<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 364px;">27<span class="ace_fold-widget ace_start ace_open" style="height: 14px; display: inline-block;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 378px;">28<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 392px;">29<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 406px;">30<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 420px;">31<span style="display: none;"></span></div><div class="ace_gutter-active-line ace_gutter-cell " style="height: 14px; top: 434px;">32<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 448px;">33<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 462px;">34<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 476px;">35<span class="ace_fold-widget ace_start ace_open" style="height: 14px; display: inline-block;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 490px;">36<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 504px;">37<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 518px;">38<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 532px;">39<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 546px;">40<span style="display: none;"></span></div></div></div><div class="ace_scroller" style="line-height: 14px; left: 46.1953px; right: 0px; bottom: 0px;"><div class="ace_content" style="top: 0px; left: 0px; width: 1188.8px; height: 598px;"><div class="ace_layer ace_print-margin-layer"><div class="ace_print-margin" style="left: 532px; visibility: hidden;"></div></div><div class="ace_layer ace_marker-layer"><div class="ace_active-line" style="height: 14px; top: 434px; left: 0px; right: 0px;"></div></div><div class="ace_layer ace_text-layer" style="height: 1e+06px; margin: 0px 4px; top: 0px; left: 0px;"><div class="ace_line" style="height: 14px; top: 0px;"><span class="ace_keyword">#include</span><span class="ace_constant ace_other"> &lt;bits/stdc++.h&gt;</span></div><div class="ace_line" style="height: 14px; top: 14px;"></div><div class="ace_line" style="height: 14px; top: 28px;"><span class="ace_keyword ace_control">using</span> <span class="ace_keyword ace_operator">namespace</span> <span class="ace_identifier">std</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 14px; top: 42px;"></div><div class="ace_line" style="height: 14px; top: 56px;"> <span class="ace_storage ace_type">bool</span> <span class="ace_identifier">solvable</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">vector</span><span class="ace_keyword ace_operator">&lt;</span><span class="ace_storage ace_type">int</span><span class="ace_keyword ace_operator">&gt;&amp;</span> <span class="ace_identifier">v</span><span class="ace_punctuation ace_operator">,</span><span class="ace_storage ace_type">int</span> <span class="ace_identifier">diff</span><span class="ace_punctuation ace_operator">,</span><span class="ace_storage ace_type">int</span> <span class="ace_identifier">K</span><span class="ace_paren ace_rparen">)</span><span class="ace_paren ace_lparen">{</span></div><div class="ace_line" style="height: 14px; top: 70px;"><span class="ace_indent-guide">    </span> </div><div class="ace_line" style="height: 14px; top: 84px;"><span class="ace_indent-guide">    </span>    <span class="ace_storage ace_type">int</span> <span class="ace_identifier">n</span><span class="ace_keyword ace_operator">=</span><span class="ace_identifier">v</span><span class="ace_punctuation ace_operator">.</span><span class="ace_identifier">size</span><span class="ace_paren ace_lparen">(</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 14px; top: 98px;"><span class="ace_indent-guide">    </span>    <span class="ace_storage ace_type">int</span> <span class="ace_identifier">prev</span><span class="ace_keyword ace_operator">=</span><span class="ace_constant ace_numeric">0</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 14px; top: 112px;"><span class="ace_indent-guide">    </span>    <span class="ace_storage ace_type">int</span> <span class="ace_identifier">removed</span><span class="ace_keyword ace_operator">=</span><span class="ace_constant ace_numeric">0</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 14px; top: 126px;"><span class="ace_indent-guide">    </span>    <span class="ace_keyword ace_control">for</span><span class="ace_paren ace_lparen">(</span><span class="ace_storage ace_type">int</span> <span class="ace_identifier">i</span><span class="ace_keyword ace_operator">=</span><span class="ace_constant ace_numeric">1</span><span class="ace_punctuation ace_operator">;</span><span class="ace_identifier">i</span><span class="ace_keyword ace_operator">&lt;</span><span class="ace_identifier">n</span><span class="ace_keyword ace_operator">&amp;&amp;</span><span class="ace_identifier">removed</span><span class="ace_keyword ace_operator">&lt;</span><span class="ace_identifier">K</span><span class="ace_punctuation ace_operator">;</span><span class="ace_identifier">i</span><span class="ace_keyword ace_operator">++</span><span class="ace_paren ace_rparen">)</span><span class="ace_paren ace_lparen">{</span></div><div class="ace_line" style="height: 14px; top: 140px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span>    <span class="ace_keyword ace_control">if</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">i</span><span class="ace_keyword ace_operator">==</span><span class="ace_identifier">n</span><span class="ace_constant ace_numeric">-1</span> <span class="ace_keyword ace_operator">||</span> <span class="ace_identifier">v</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">i</span><span class="ace_constant ace_numeric">+1</span><span class="ace_paren ace_rparen">]</span><span class="ace_keyword ace_operator">-</span><span class="ace_identifier">v</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">prev</span><span class="ace_paren ace_rparen">]</span><span class="ace_keyword ace_operator">&gt;</span><span class="ace_identifier">diff</span><span class="ace_paren ace_rparen">)</span><span class="ace_paren ace_lparen">{</span></div><div class="ace_line" style="height: 14px; top: 154px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span>    <span class="ace_keyword ace_control">if</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">v</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">i</span><span class="ace_paren ace_rparen">]</span><span class="ace_keyword ace_operator">-</span><span class="ace_identifier">v</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">prev</span><span class="ace_paren ace_rparen">]</span><span class="ace_keyword ace_operator">&gt;</span><span class="ace_identifier">diff</span><span class="ace_paren ace_rparen">)</span><span class="ace_keyword ace_control">return</span> <span class="ace_constant ace_language">false</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 14px; top: 168px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span>    <span class="ace_identifier">prev</span><span class="ace_keyword ace_operator">=</span><span class="ace_identifier">i</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 14px; top: 182px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span>    <span class="ace_paren ace_rparen">}</span></div><div class="ace_line" style="height: 14px; top: 196px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span>    <span class="ace_keyword ace_control">else</span> <span class="ace_identifier">removed</span><span class="ace_keyword ace_operator">++</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 14px; top: 210px;"><span class="ace_indent-guide">    </span>    <span class="ace_paren ace_rparen">}</span></div><div class="ace_line" style="height: 14px; top: 224px;"><span class="ace_indent-guide">    </span>    <span class="ace_keyword ace_control">return</span> <span class="ace_paren ace_lparen">(</span><span class="ace_identifier">removed</span><span class="ace_keyword ace_operator">==</span><span class="ace_identifier">K</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 14px; top: 238px;">    <span class="ace_paren ace_rparen">}</span></div><div class="ace_line" style="height: 14px; top: 252px;">    </div><div class="ace_line" style="height: 14px; top: 266px;">    <span class="ace_storage ace_type">int</span> <span class="ace_identifier">minDiff</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">vector</span><span class="ace_keyword ace_operator">&lt;</span><span class="ace_storage ace_type">int</span><span class="ace_keyword ace_operator">&gt;</span> <span class="ace_identifier">v</span><span class="ace_punctuation ace_operator">,</span><span class="ace_storage ace_type">int</span> <span class="ace_identifier">K</span><span class="ace_paren ace_rparen">)</span><span class="ace_paren ace_lparen">{</span></div><div class="ace_line" style="height: 14px; top: 280px;"><span class="ace_indent-guide">    </span>    </div><div class="ace_line" style="height: 14px; top: 294px;"><span class="ace_indent-guide">    </span>    <span class="ace_storage ace_type">int</span> <span class="ace_identifier">hi</span><span class="ace_keyword ace_operator">=</span><span class="ace_identifier">v</span><span class="ace_punctuation ace_operator">.</span><span class="ace_identifier">back</span><span class="ace_paren ace_lparen">(</span><span class="ace_paren ace_rparen">)</span><span class="ace_keyword ace_operator">-</span><span class="ace_identifier">v</span><span class="ace_paren ace_lparen">[</span><span class="ace_constant ace_numeric">0</span><span class="ace_paren ace_rparen">]</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 14px; top: 308px;"><span class="ace_indent-guide">    </span>    <span class="ace_storage ace_type">int</span> <span class="ace_identifier">lo</span><span class="ace_keyword ace_operator">=</span><span class="ace_constant ace_numeric">0</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 14px; top: 322px;"><span class="ace_indent-guide">    </span>    </div><div class="ace_line" style="height: 14px; top: 336px;"><span class="ace_indent-guide">    </span>    <span class="ace_keyword ace_control">for</span><span class="ace_paren ace_lparen">(</span><span class="ace_storage ace_type">int</span> <span class="ace_identifier">i</span><span class="ace_keyword ace_operator">=</span><span class="ace_constant ace_numeric">0</span><span class="ace_punctuation ace_operator">;</span><span class="ace_identifier">i</span><span class="ace_constant ace_numeric">+1</span><span class="ace_keyword ace_operator">&lt;</span><span class="ace_identifier">v</span><span class="ace_punctuation ace_operator">.</span><span class="ace_identifier">size</span><span class="ace_paren ace_lparen">(</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span><span class="ace_identifier">i</span><span class="ace_keyword ace_operator">++</span><span class="ace_paren ace_rparen">)</span><span class="ace_identifier">lo</span><span class="ace_keyword ace_operator">=</span><span class="ace_identifier">max</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">lo</span><span class="ace_punctuation ace_operator">,</span><span class="ace_identifier">v</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">i</span><span class="ace_constant ace_numeric">+1</span><span class="ace_paren ace_rparen">]</span><span class="ace_keyword ace_operator">-</span><span class="ace_identifier">v</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">i</span><span class="ace_paren ace_rparen">])</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 14px; top: 350px;"><span class="ace_indent-guide">    </span>    </div><div class="ace_line" style="height: 14px; top: 364px;"><span class="ace_indent-guide">    </span>    <span class="ace_keyword ace_control">while</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">lo</span><span class="ace_keyword ace_operator">&lt;</span><span class="ace_identifier">hi</span><span class="ace_paren ace_rparen">)</span><span class="ace_paren ace_lparen">{</span></div><div class="ace_line" style="height: 14px; top: 378px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span>    <span class="ace_storage ace_type">int</span> <span class="ace_identifier">mid</span><span class="ace_keyword ace_operator">=</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">lo</span><span class="ace_keyword ace_operator">+</span><span class="ace_identifier">hi</span><span class="ace_paren ace_rparen">)</span><span class="ace_keyword ace_operator">/</span><span class="ace_constant ace_numeric">2</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 14px; top: 392px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span>    <span class="ace_keyword ace_control">if</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">solvable</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">v</span><span class="ace_punctuation ace_operator">,</span><span class="ace_identifier">mid</span><span class="ace_punctuation ace_operator">,</span><span class="ace_identifier">K</span><span class="ace_paren ace_rparen">))</span><span class="ace_identifier">hi</span><span class="ace_keyword ace_operator">=</span><span class="ace_identifier">mid</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 14px; top: 406px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span>    <span class="ace_keyword ace_control">else</span> <span class="ace_identifier">lo</span><span class="ace_keyword ace_operator">=</span><span class="ace_identifier">mid</span><span class="ace_constant ace_numeric">+1</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 14px; top: 420px;"><span class="ace_indent-guide">    </span>    <span class="ace_paren ace_rparen">}</span></div><div class="ace_line" style="height: 14px; top: 434px;"><span class="ace_indent-guide">    </span>    <span class="ace_keyword ace_control">return</span> <span class="ace_identifier">lo</span><span class="ace_punctuation ace_operator">;</span>        </div><div class="ace_line" style="height: 14px; top: 448px;">    <span class="ace_paren ace_rparen">}</span></div><div class="ace_line" style="height: 14px; top: 462px;"></div><div class="ace_line" style="height: 14px; top: 476px;"><span class="ace_storage ace_type">int</span> <span class="ace_identifier">main</span><span class="ace_paren ace_lparen">(</span><span class="ace_storage ace_type">void</span><span class="ace_paren ace_rparen">)</span><span class="ace_paren ace_lparen">{</span></div><div class="ace_line" style="height: 14px; top: 490px;"></div><div class="ace_line" style="height: 14px; top: 504px;"><span class="ace_indent-guide">    </span>    <span class="ace_identifier">cout</span><span class="ace_keyword ace_operator">&lt;&lt;</span><span class="ace_identifier">minDiff</span><span class="ace_paren ace_lparen">({</span><span class="ace_constant ace_numeric">1</span><span class="ace_punctuation ace_operator">,</span><span class="ace_constant ace_numeric">2</span><span class="ace_punctuation ace_operator">,</span><span class="ace_constant ace_numeric">3</span><span class="ace_punctuation ace_operator">,</span><span class="ace_constant ace_numeric">7</span><span class="ace_punctuation ace_operator">,</span><span class="ace_constant ace_numeric">8</span><span class="ace_paren ace_rparen">}</span><span class="ace_punctuation ace_operator">,</span><span class="ace_constant ace_numeric">2</span><span class="ace_paren ace_rparen">)</span><span class="ace_keyword ace_operator">&lt;&lt;</span><span class="ace_identifier">endl</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 14px; top: 518px;">    </div><div class="ace_line" style="height: 14px; top: 532px;">    <span class="ace_keyword ace_control">return</span> <span class="ace_constant ace_numeric">0</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 14px; top: 546px;"><span class="ace_paren ace_rparen">}</span></div></div><div class="ace_layer ace_marker-layer"></div><div class="ace_layer ace_cursor-layer ace_animate-blinking"><div class="ace_cursor" style="display: block; top: 434px; left: 176px; width: 7px; height: 14px; animation-duration: 1000ms;"></div></div></div></div><div class="ace_scrollbar ace_scrollbar-v" style="display: none; width: 22px; bottom: 0px;"><div class="ace_scrollbar-inner" style="width: 22px; height: 560px;">&nbsp;</div></div><div class="ace_scrollbar ace_scrollbar-h" style="display: none; height: 22px; left: 46.1953px; right: 0px;"><div class="ace_scrollbar-inner" style="height: 22px; width: 1188px;">&nbsp;</div></div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: hidden;"><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: visible;">הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה</div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font-style: inherit; font-variant: inherit; font-stretch: inherit; font-size: inherit; line-height: inherit; font-family: inherit; overflow: visible;">XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX</div></div></div></div></div></div><div data-v-a7f45320="" id="ide-right" class="ide-right"><section data-v-a7f45320="" class="accordions"><article data-v-a7f45320="" class="accordion"><div data-v-a7f45320="" class="accordion-header toggle background-grey-light has-text-weight-semibold"><p data-v-a7f45320=""><svg data-v-a7f45320="" aria-hidden="true" focusable="false" data-prefix="fas" data-icon="chevron-down" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 448 512" class="svg-inline--fa fa-chevron-down fa-w-14"><path data-v-a7f45320="" fill="currentColor" d="M207.029 381.476L12.686 187.132c-9.373-9.373-9.373-24.569 0-33.941l22.667-22.667c9.357-9.357 24.522-9.375 33.901-.04L224 284.505l154.745-154.021c9.379-9.335 24.544-9.317 33.901.04l22.667 22.667c9.373 9.373 9.373 24.569 0 33.941L240.971 381.476c-9.373 9.372-24.569 9.372-33.942 0z" class=""></path></svg>&nbsp;&nbsp;&nbsp;Execute Mode, Version, Inputs &amp; Arguments</p></div><div data-v-a7f45320="" class="accordion-body custom-grey"><div data-v-a7f45320="" class="accordion-content is-paddingless"><div data-v-a7f45320="" class="columns is-multiline options-section is-marginless padding-left-none"><div data-v-a7f45320="" class="column columns is-multiline left-column is-marginless padding-left-none is-print-12 is-6"><div data-v-a7f45320="" class="column is-hidden-print is-12"><div data-v-a7f45320="" class="version-interactive-section is-mobile level"><div data-v-a7f45320="" class="has-text-centered level-left"><div data-v-a7f45320="" class="field is-narrow"><div data-v-a7f45320="" class="select is-rounded is-small has-text-weight-bold version-dropdown"><select data-v-a7f45320=""><option data-v-a7f45320="" value="0">
                                g++ 14 GCC 5.3.0
                              </option><option data-v-a7f45320="" value="1">
                                g++ 14 GCC 7.2.0
                              </option><option data-v-a7f45320="" value="2">
                                g++ 14 GCC 8.1.0
                              </option><option data-v-a7f45320="" value="3">
                                g++ 14 GCC 9.1.0
                              </option></select></div></div></div><div data-v-a7f45320="" class="field has-text-centered level-right"><input data-v-a7f45320="" id="interactiveMode" type="checkbox" name="interactiveMode" class="switch has-text-white"><label data-v-a7f45320="" for="interactiveMode" class="ide-title has-text-weight-semibold">Interactive</label></div></div></div><div data-v-a7f45320="" class="column padding-left-none is-print-12 is-12"><div data-v-a7f45320="" class="column is-12 is-print-12"><div data-v-a7f45320="" class="has-text-weight-semibold ide-title">CommandLine Arguments</div><div data-v-a7f45320="" class="control"><input data-v-a7f45320="" type="text" name="arguments" autocomplete="off" class="input"></div></div></div></div><div data-v-a7f45320="" class="column is-6 is-print-12"><div data-v-a7f45320="" class="has-text-weight-semibold ide-title">Stdin Inputs</div><div data-v-a7f45320="" class="control"><textarea data-v-a7f45320="" rows="2" name="stdin" class="textarea"></textarea></div></div></div></div></div></article></section><div data-v-a7f45320="" class="level execute-section is-hidden-print"><div data-v-a7f45320="" class="level-item"><div data-v-a7f45320="" class="field is-grouped"><p data-v-a7f45320="" class="control"><button data-v-a7f45320="" class="button is-info has-text-white has-text-weight-bold"><span data-v-a7f45320="" style=""><svg data-v-a7f45320="" aria-hidden="true" focusable="false" data-prefix="fas" data-icon="play" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 448 512" class="svg-inline--fa fa-play fa-w-14"><path data-v-a7f45320="" fill="currentColor" d="M424.4 214.7L72.4 6.6C43.8-10.3 0 6.1 0 47.9V464c0 37.5 40.7 60.1 72.4 41.3l352-208c31.4-18.5 31.5-64.1 0-82.6z" class=""></path></svg>&nbsp;&nbsp;&nbsp;Execute</span><!----></button></p><!----><!----><p data-v-a7f45320="" class="control"><label data-v-a7f45320="" id="upload-button" class="button execute-button"><input data-v-a7f45320="" type="file" name="file" title="" class="file-input upload-pointer"><svg data-v-a7f45320="" aria-hidden="true" focusable="false" data-prefix="fas" data-icon="file-upload" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 384 512" class="svg-inline--fa fa-file-upload fa-w-12"><path data-v-a7f45320="" fill="currentColor" d="M224 136V0H24C10.7 0 0 10.7 0 24v464c0 13.3 10.7 24 24 24h336c13.3 0 24-10.7 24-24V160H248c-13.2 0-24-10.8-24-24zm65.18 216.01H224v80c0 8.84-7.16 16-16 16h-32c-8.84 0-16-7.16-16-16v-80H94.82c-14.28 0-21.41-17.29-11.27-27.36l96.42-95.7c6.65-6.61 17.39-6.61 24.04 0l96.42 95.7c10.15 10.07 3.03 27.36-11.25 27.36zM377 105L279.1 7c-4.5-4.5-10.6-7-17-7H256v128h128v-6.1c0-6.3-2.5-12.4-7-16.9z" class=""></path></svg></label></p><p data-v-a7f45320="" class="control"><button data-v-a7f45320="" class="button has-text-dark has-text-weight-bold"><svg data-v-a7f45320="" aria-hidden="true" focusable="false" data-prefix="fas" data-icon="ellipsis-h" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 512 512" class="svg-inline--fa fa-ellipsis-h fa-w-16"><path data-v-a7f45320="" fill="currentColor" d="M328 256c0 39.8-32.2 72-72 72s-72-32.2-72-72 32.2-72 72-72 72 32.2 72 72zm104-72c-39.8 0-72 32.2-72 72s32.2 72 72 72 72-32.2 72-72-32.2-72-72-72zm-352 0c-39.8 0-72 32.2-72 72s32.2 72 72 72 72-32.2 72-72-32.2-72-72-72z" class=""></path></svg></button></p><p data-v-a7f45320="" class="control is-hidden-mobile"><button data-v-a7f45320="" class="button has-text-dark has-text-weight-bold"><svg data-v-a7f45320="" aria-hidden="true" focusable="false" data-prefix="fas" data-icon="expand" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 448 512" class="svg-inline--fa fa-expand fa-w-14"><path data-v-a7f45320="" fill="currentColor" d="M0 180V56c0-13.3 10.7-24 24-24h124c6.6 0 12 5.4 12 12v40c0 6.6-5.4 12-12 12H64v84c0 6.6-5.4 12-12 12H12c-6.6 0-12-5.4-12-12zM288 44v40c0 6.6 5.4 12 12 12h84v84c0 6.6 5.4 12 12 12h40c6.6 0 12-5.4 12-12V56c0-13.3-10.7-24-24-24H300c-6.6 0-12 5.4-12 12zm148 276h-40c-6.6 0-12 5.4-12 12v84h-84c-6.6 0-12 5.4-12 12v40c0 6.6 5.4 12 12 12h124c13.3 0 24-10.7 24-24V332c0-6.6-5.4-12-12-12zM160 468v-40c0-6.6-5.4-12-12-12H64v-84c0-6.6-5.4-12-12-12H12c-6.6 0-12 5.4-12 12v124c0 13.3 10.7 24 24 24h124c6.6 0 12-5.4 12-12z" class=""></path></svg><!----></button></p></div></div></div><div data-v-a7f45320="" class="upload-message has-text-centered" style="display: none;">
        
      </div><div data-v-62a83e41="" data-v-a7f45320="" class="has-text-centered error-box" style="display: none;"><svg data-v-62a83e41="" aria-hidden="true" focusable="false" data-prefix="fas" data-icon="exclamation-circle" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 512 512" class="is-size-5 svg-inline--fa fa-exclamation-circle fa-w-16 has-text-danger"><path data-v-62a83e41="" fill="currentColor" d="M504 256c0 136.997-111.043 248-248 248S8 392.997 8 256C8 119.083 119.043 8 256 8s248 111.083 248 248zm-248 50c-25.405 0-46 20.595-46 46s20.595 46 46 46 46-20.595 46-46-20.595-46-46-46zm-43.673-165.346l7.418 136c.347 6.364 5.609 11.346 11.982 11.346h48.546c6.373 0 11.635-4.982 11.982-11.346l7.418-136c.375-6.874-5.098-12.654-11.982-12.654h-63.383c-6.884 0-12.356 5.78-11.981 12.654z" class=""></path></svg><span data-v-62a83e41="" class="has-text-weight-bold error-message">
        
  </span></div><div data-v-a7f45320="" class="has-text-weight-semibold ide-title">Result</div><div data-v-a7f45320="" class="execute-time level is-mobile is-marginless" style=""><div data-v-a7f45320="" class="level-left is-marginless is-paddingless"><span data-v-a7f45320="">CPU Time: 0.00 sec(s), Memory: 3348 kilobyte(s)</span></div><div data-v-a7f45320="" class="is-marginless is-paddingless level-right"><span data-v-a7f45320="">compiled and&nbsp;</span>executed in 3.03 sec(s)</div></div><div data-v-a7f45320=""><div data-v-a7f45320="" id="output" class="code-editor no-border-print ace_editor ace-xcode" style="height: 80px;"><textarea class="ace_text-input" wrap="off" autocorrect="off" autocapitalize="off" spellcheck="false" style="opacity: 0; font-size: 1px; height: 1px; width: 1px; top: 34px; left: 20px;"></textarea><div class="ace_gutter" aria-hidden="true" style="display: none; left: 0px; width: 40px;"><div class="ace_layer ace_gutter-layer ace_folding-enabled" style="height: 1e+06px; top: 20px; left: 0px; width: 40px;"><div class="ace_gutter-cell ace_gutter-active-line " style="height: 14px; top: 0px;">1<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 14px; top: 14px;">2<span style="display: none;"></span></div></div></div><div class="ace_scroller" style="line-height: 14px; left: 0px; right: 0px; bottom: 0px;"><div class="ace_content" style="top: 20px; left: 0px; width: 1235px; height: 126px;"><div class="ace_layer ace_print-margin-layer"><div class="ace_print-margin" style="left: 548px; visibility: hidden;"></div></div><div class="ace_layer ace_marker-layer"><div class="ace_active-line" style="height: 14px; top: 0px; left: 0px; right: 0px;"></div></div><div class="ace_layer ace_text-layer" style="height: 1e+06px; margin: 0px 20px; top: 0px; left: 0px;"><div class="ace_line" style="height: 14px; top: 0px;">5</div><div class="ace_line" style="height: 14px; top: 14px;"></div></div><div class="ace_layer ace_marker-layer"></div><div class="ace_layer ace_cursor-layer ace_hidden-cursors"><div class="ace_cursor" style="display: block; top: 0px; left: 20px; width: 7px; height: 14px;"></div></div></div></div><div class="ace_scrollbar ace_scrollbar-v" style="display: none; width: 22px; bottom: 0px;"><div class="ace_scrollbar-inner" style="width: 22px; height: 68px;">&nbsp;</div></div><div class="ace_scrollbar ace_scrollbar-h" style="display: none; height: 22px; left: 0px; right: 0px;"><div class="ace_scrollbar-inner" style="height: 22px; width: 1235px;">&nbsp;</div></div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: hidden;"><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: visible;">הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה</div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font-style: inherit; font-variant: inherit; font-stretch: inherit; font-size: inherit; line-height: inherit; font-family: inherit; overflow: visible;">XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX</div></div></div></div><!----><!----></div><div data-v-a7f45320="" class="has-text-grey-dark ide-info-message advance-ide-hint"><div data-v-a7f45320="" class="is-underlined">Note:</div><ul data-v-a7f45320=""><li data-v-a7f45320="">1. For file operations - upload files using upload button <svg data-v-a7f45320="" aria-hidden="true" focusable="false" data-prefix="fas" data-icon="file-upload" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 384 512" class="svg-inline--fa fa-file-upload fa-w-12"><path data-v-a7f45320="" fill="currentColor" d="M224 136V0H24C10.7 0 0 10.7 0 24v464c0 13.3 10.7 24 24 24h336c13.3 0 24-10.7 24-24V160H248c-13.2 0-24-10.8-24-24zm65.18 216.01H224v80c0 8.84-7.16 16-16 16h-32c-8.84 0-16-7.16-16-16v-80H94.82c-14.28 0-21.41-17.29-11.27-27.36l96.42-95.7c6.65-6.61 17.39-6.61 24.04 0l96.42 95.7c10.15 10.07 3.03 27.36-11.25 27.36zM377 105L279.1 7c-4.5-4.5-10.6-7-17-7H256v128h128v-6.1c0-6.3-2.5-12.4-7-16.9z" class=""></path></svg>, Files will be upload to /uploads folder. You can read those files in program from /uploads folder. To write a file from your program, write files to '/myfiles' folder. Please note the uploaded files stored in the server only for the current session.</li><li data-v-a7f45320="">2. For detailed documentation check - <a data-v-a7f45320="" href="https://docs.jdoodle.com/" target="_blank">Our Documentation</a>, or check our <a data-v-a7f45320="" href="https://www.youtube.com/channel/UCMg38oKj3kRmzksoRDEAs9Q" target="_blank">Youtube channel.</a></li></ul></div></div><div data-v-a7f45320="" id="codefund" class="has-text-centered"><div data-v-a7f45320="" data-ea-publisher="jdoodle" data-ea-type="text" class="horizontal loaded loaded"><div class="ea-placement ea-type-text"><div class="ea-content"><div class="ea-text"><a href="https://server.ethicalads.io/proxy/click/1316/1dfc97be-0481-4602-a7bd-b1fdb2c49977/" rel="nofollow" target="_blank"><strong>Introducing App Platform </strong><span>a new PaaS that gets your apps to market, faster.</span><strong> Try Now with $100 Credit.</strong></a></div></div><div class="ea-callout"><a target="_blank" href="https://ethicalads.io/?ref=ea-text">Ad by EthicalAds</a></div></div><img src="./Min_the_Max_diff_files/saved_resource(2)" class="ea-pixel"><img src="./Min_the_Max_diff_files/saved_resource(3)" class="ea-pixel"></div></div><div data-v-a7f45320="" class="is-hidden-print has-text-centered vilambaram-area-bottom" style="display: none;"><div data-v-a7f45320="" id="bsa-zone_1596130146805-9_123456" style="" data-google-query-id="CNWbqISfsu4CFe0ZtwAdOMIGDA"><div id="google_ads_iframe_/8691100/JDoodle_S2S_InContent_ROS_Pos2_0__container__" style="border: 0pt none; display: inline-block; width: 970px; height: 90px;"><iframe frameborder="0" src="./Min_the_Max_diff_files/container(1).html" id="google_ads_iframe_/8691100/JDoodle_S2S_InContent_ROS_Pos2_0" title="3rd party ad content" name="" scrolling="no" marginwidth="0" marginheight="0" width="970" height="90" data-is-safeframe="true" sandbox="allow-forms allow-popups allow-popups-to-escape-sandbox allow-same-origin allow-scripts allow-top-navigation-by-user-activation" data-google-container-id="1u" style="border: 0px; vertical-align: bottom;" data-load-complete="true"></iframe></div></div></div><div data-v-a7f45320="" class="has-text-centered">Thanks for using our </div><h1 data-v-a7f45320="" class="title has-text-centered is-marginless">Online C++ 14 <span data-v-a7f45320="">Compiler</span> IDE</h1><div data-v-a7f45320="" class="has-text-centered">to execute your program</div><div data-v-a7f45320="" class="columns is-mobile"><div data-v-a7f45320="" class="column is-10-mobile is-offset-1-mobile is-8-tablet is-offset-2-tablet is-6-desktop is-offset-3-desktop has-text-centered comment-box has-text-weight-semibold"><div data-v-027d95da="" data-v-a7f45320="" class="margin-top-20px margin-bottom-10px has-text-centered"><div data-v-027d95da="" class="level has-text-centered"><div data-v-027d95da="" class="level-item store-img"><a data-v-027d95da="" href="https://play.google.com/store/apps/details?id=com.nutpan.jdoodle_app&amp;pcampaignid=pcampaignidMKT-Other-global-all-co-prtnr-py-PartBadge-Mar2515-1" target="_blank"><img data-v-027d95da="" src="./Min_the_Max_diff_files/google-play-badge.db9b21a1.png" alt="Get it on Google Play" class="google-store-img"></a></div><div data-v-027d95da="" class="level-item store-img"><a data-v-027d95da="" href="https://apps.apple.com/us/app/jdoodle/id1544598494" target="_blank"><img data-v-027d95da="" src="./Min_the_Max_diff_files/Apple_Store_Badge.2928664f.svg" alt="Get it on Apple Store" class="apple-store-img"></a></div></div></div></div></div><div data-v-a7f45320="" class="columns"><div data-v-a7f45320="" class="column"><div data-v-c2f69e8e="" data-v-a7f45320="" class="know-box box has-text-centered comment-box has-text-weight-semibold"><div data-v-c2f69e8e="" class="has-text-centered is-underlined know-title">Know Your JDoodle</div><div data-v-c2f69e8e="" class="has-text-left"><ul data-v-c2f69e8e=""><li data-v-c2f69e8e=""><svg data-v-c2f69e8e="" aria-hidden="true" focusable="false" data-prefix="fas" data-icon="dot-circle" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 512 512" class="has-text-grey-dark svg-inline--fa fa-dot-circle fa-w-16"><path data-v-c2f69e8e="" fill="currentColor" d="M256 8C119.033 8 8 119.033 8 256s111.033 248 248 248 248-111.033 248-248S392.967 8 256 8zm80 248c0 44.112-35.888 80-80 80s-80-35.888-80-80 35.888-80 80-80 80 35.888 80 80z" class=""></path></svg><span data-v-c2f69e8e="" class="li-points">JDoodle Supports 72 Languages and 2 DBs. <a data-v-c2f69e8e="" class="is-link has-text-weight-bold"> Click here </a> to see all.</span></li><li data-v-c2f69e8e=""><svg data-v-c2f69e8e="" aria-hidden="true" focusable="false" data-prefix="fas" data-icon="dot-circle" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 512 512" class="has-text-grey-dark svg-inline--fa fa-dot-circle fa-w-16"><path data-v-c2f69e8e="" fill="currentColor" d="M256 8C119.033 8 8 119.033 8 256s111.033 248 248 248 248-111.033 248-248S392.967 8 256 8zm80 248c0 44.112-35.888 80-80 80s-80-35.888-80-80 35.888-80 80-80 80 35.888 80 80z" class=""></path></svg><span data-v-c2f69e8e="" class="li-points">Fullscreen - side-by-side code and output is available. click the "<svg data-v-c2f69e8e="" aria-hidden="true" focusable="false" data-prefix="fas" data-icon="expand" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 448 512" class="svg-inline--fa fa-expand fa-w-14"><path data-v-c2f69e8e="" fill="currentColor" d="M0 180V56c0-13.3 10.7-24 24-24h124c6.6 0 12 5.4 12 12v40c0 6.6-5.4 12-12 12H64v84c0 6.6-5.4 12-12 12H12c-6.6 0-12-5.4-12-12zM288 44v40c0 6.6 5.4 12 12 12h84v84c0 6.6 5.4 12 12 12h40c6.6 0 12-5.4 12-12V56c0-13.3-10.7-24-24-24H300c-6.6 0-12 5.4-12 12zm148 276h-40c-6.6 0-12 5.4-12 12v84h-84c-6.6 0-12 5.4-12 12v40c0 6.6 5.4 12 12 12h124c13.3 0 24-10.7 24-24V332c0-6.6-5.4-12-12-12zM160 468v-40c0-6.6-5.4-12-12-12H64v-84c0-6.6-5.4-12-12-12H12c-6.6 0-12 5.4-12 12v124c0 13.3 10.7 24 24 24h124c6.6 0 12-5.4 12-12z" class=""></path></svg>" icon near execute button to switch.</span></li><li data-v-c2f69e8e=""><svg data-v-c2f69e8e="" aria-hidden="true" focusable="false" data-prefix="fas" data-icon="dot-circle" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 512 512" class="has-text-grey-dark svg-inline--fa fa-dot-circle fa-w-16"><path data-v-c2f69e8e="" fill="currentColor" d="M256 8C119.033 8 8 119.033 8 256s111.033 248 248 248 248-111.033 248-248S392.967 8 256 8zm80 248c0 44.112-35.888 80-80 80s-80-35.888-80-80 35.888-80 80-80 80 35.888 80 80z" class=""></path></svg><span data-v-c2f69e8e="" class="li-points">Dark Theme available. Click on "<svg data-v-c2f69e8e="" aria-hidden="true" focusable="false" data-prefix="fas" data-icon="ellipsis-h" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 512 512" class="svg-inline--fa fa-ellipsis-h fa-w-16"><path data-v-c2f69e8e="" fill="currentColor" d="M328 256c0 39.8-32.2 72-72 72s-72-32.2-72-72 32.2-72 72-72 72 32.2 72 72zm104-72c-39.8 0-72 32.2-72 72s32.2 72 72 72 72-32.2 72-72-32.2-72-72-72zm-352 0c-39.8 0-72 32.2-72 72s32.2 72 72 72 72-32.2 72-72-32.2-72-72-72z" class=""></path></svg>" icon near execute button and select dark theme.</span></li><li data-v-c2f69e8e=""><svg data-v-c2f69e8e="" aria-hidden="true" focusable="false" data-prefix="fas" data-icon="dot-circle" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 512 512" class="has-text-grey-dark svg-inline--fa fa-dot-circle fa-w-16"><path data-v-c2f69e8e="" fill="currentColor" d="M256 8C119.033 8 8 119.033 8 256s111.033 248 248 248 248-111.033 248-248S392.967 8 256 8zm80 248c0 44.112-35.888 80-80 80s-80-35.888-80-80 35.888-80 80-80 80 35.888 80 80z" class=""></path></svg><span data-v-c2f69e8e="" class="li-points">You can embed code from JDoodle directly into your website/blog. <a data-v-c2f69e8e="" target="_blank" href="http://blog.nutpan.com/2016/07/run-programs-directly-from-your-blog-or.html" class="is-link has-text-weight-bold"> Click here </a> to know more.</span></li><li data-v-c2f69e8e=""><svg data-v-c2f69e8e="" aria-hidden="true" focusable="false" data-prefix="fas" data-icon="dot-circle" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 512 512" class="has-text-grey-dark svg-inline--fa fa-dot-circle fa-w-16"><path data-v-c2f69e8e="" fill="currentColor" d="M256 8C119.033 8 8 119.033 8 256s111.033 248 248 248 248-111.033 248-248S392.967 8 256 8zm80 248c0 44.112-35.888 80-80 80s-80-35.888-80-80 35.888-80 80-80 80 35.888 80 80z" class=""></path></svg><span data-v-c2f69e8e="" class="li-points">JDoodle offers an API service. You can execute programs just by calling our API.<a data-v-c2f69e8e="" target="_blank" href="https://www.jdoodle.com/compiler-api" class="is-link has-text-weight-bold"> Click here </a> to know more.</span></li><li data-v-c2f69e8e=""><svg data-v-c2f69e8e="" aria-hidden="true" focusable="false" data-prefix="fas" data-icon="dot-circle" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 512 512" class="has-text-grey-dark svg-inline--fa fa-dot-circle fa-w-16"><path data-v-c2f69e8e="" fill="currentColor" d="M256 8C119.033 8 8 119.033 8 256s111.033 248 248 248 248-111.033 248-248S392.967 8 256 8zm80 248c0 44.112-35.888 80-80 80s-80-35.888-80-80 35.888-80 80-80 80 35.888 80 80z" class=""></path></svg><span data-v-c2f69e8e="" class="li-points">If you like JDoodle, Please share us in Social Media.<a data-v-c2f69e8e="" target="_blank" class="is-link has-text-weight-bold"> Click here </a> to share.</span></li><li data-v-c2f69e8e=""><svg data-v-c2f69e8e="" aria-hidden="true" focusable="false" data-prefix="fas" data-icon="dot-circle" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 512 512" class="has-text-grey-dark svg-inline--fa fa-dot-circle fa-w-16"><path data-v-c2f69e8e="" fill="currentColor" d="M256 8C119.033 8 8 119.033 8 256s111.033 248 248 248 248-111.033 248-248S392.967 8 256 8zm80 248c0 44.112-35.888 80-80 80s-80-35.888-80-80 35.888-80 80-80 80 35.888 80 80z" class=""></path></svg><span data-v-c2f69e8e="" class="li-points">Check our <a data-v-c2f69e8e="" target="_blank" href="https://docs.jdoodle.com/" class="is-link has-text-weight-bold"> Documentation Page </a> for more info.</span></li></ul><div data-v-c2f69e8e="" class="has-text-centered in-service">JDoodle is serving the programming community since 2013</div></div></div></div><div data-v-a7f45320="" class="column"><div data-v-92dc461c="" data-v-a7f45320="" class="know-box box has-text-centered comment-box has-text-weight-semibold"><div data-v-92dc461c="" class="has-text-centered is-underlined know-title">JDoodle For Your Organisation</div><div data-v-92dc461c="" class="has-text-left"><ul data-v-92dc461c=""><li data-v-92dc461c=""><svg data-v-92dc461c="" aria-hidden="true" focusable="false" data-prefix="fas" data-icon="dot-circle" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 512 512" class="has-text-grey-dark svg-inline--fa fa-dot-circle fa-w-16"><path data-v-92dc461c="" fill="currentColor" d="M256 8C119.033 8 8 119.033 8 256s111.033 248 248 248 248-111.033 248-248S392.967 8 256 8zm80 248c0 44.112-35.888 80-80 80s-80-35.888-80-80 35.888-80 80-80 80 35.888 80 80z" class=""></path></svg><span data-v-92dc461c="" class="li-points">Do you have any specific compiler requirements?</span></li><li data-v-92dc461c=""><svg data-v-92dc461c="" aria-hidden="true" focusable="false" data-prefix="fas" data-icon="dot-circle" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 512 512" class="has-text-grey-dark svg-inline--fa fa-dot-circle fa-w-16"><path data-v-92dc461c="" fill="currentColor" d="M256 8C119.033 8 8 119.033 8 256s111.033 248 248 248 248-111.033 248-248S392.967 8 256 8zm80 248c0 44.112-35.888 80-80 80s-80-35.888-80-80 35.888-80 80-80 80 35.888 80 80z" class=""></path></svg><span data-v-92dc461c="" class="li-points">Do you want to integrate compilers with your website, webapp, mobile app, courses?</span></li><li data-v-92dc461c=""><svg data-v-92dc461c="" aria-hidden="true" focusable="false" data-prefix="fas" data-icon="dot-circle" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 512 512" class="has-text-grey-dark svg-inline--fa fa-dot-circle fa-w-16"><path data-v-92dc461c="" fill="currentColor" d="M256 8C119.033 8 8 119.033 8 256s111.033 248 248 248 248-111.033 248-248S392.967 8 256 8zm80 248c0 44.112-35.888 80-80 80s-80-35.888-80-80 35.888-80 80-80 80 35.888 80 80z" class=""></path></svg><span data-v-92dc461c="" class="li-points">Do you need more than our <a data-v-92dc461c="" target="_blank" href="http://blog.nutpan.com/2016/07/run-programs-directly-from-your-blog-or.html" class="is-link has-text-weight-bold"> Embed </a> and <a data-v-92dc461c="" target="_blank" href="https://www.jdoodle.com/compiler-api" class="is-link has-text-weight-bold"> API </a> features?</span></li><li data-v-92dc461c=""><svg data-v-92dc461c="" aria-hidden="true" focusable="false" data-prefix="fas" data-icon="dot-circle" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 512 512" class="has-text-grey-dark svg-inline--fa fa-dot-circle fa-w-16"><path data-v-92dc461c="" fill="currentColor" d="M256 8C119.033 8 8 119.033 8 256s111.033 248 248 248 248-111.033 248-248S392.967 8 256 8zm80 248c0 44.112-35.888 80-80 80s-80-35.888-80-80 35.888-80 80-80 80 35.888 80 80z" class=""></path></svg><span data-v-92dc461c="" class="li-points">Looking for Multiple Files, Connecting to DB, Debugging, etc.?</span></li><li data-v-92dc461c=""><svg data-v-92dc461c="" aria-hidden="true" focusable="false" data-prefix="fas" data-icon="dot-circle" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 512 512" class="has-text-grey-dark svg-inline--fa fa-dot-circle fa-w-16"><path data-v-92dc461c="" fill="currentColor" d="M256 8C119.033 8 8 119.033 8 256s111.033 248 248 248 248-111.033 248-248S392.967 8 256 8zm80 248c0 44.112-35.888 80-80 80s-80-35.888-80-80 35.888-80 80-80 80 35.888 80 80z" class=""></path></svg><span data-v-92dc461c="" class="li-points">Are you building any innovative solution for your students or recruitment?</span></li><li data-v-92dc461c=""><svg data-v-92dc461c="" aria-hidden="true" focusable="false" data-prefix="fas" data-icon="dot-circle" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 512 512" class="has-text-grey-dark svg-inline--fa fa-dot-circle fa-w-16"><path data-v-92dc461c="" fill="currentColor" d="M256 8C119.033 8 8 119.033 8 256s111.033 248 248 248 248-111.033 248-248S392.967 8 256 8zm80 248c0 44.112-35.888 80-80 80s-80-35.888-80-80 35.888-80 80-80 80 35.888 80 80z" class=""></path></svg><span data-v-92dc461c="" class="li-points">Want to run JDoodle in-house?</span></li><li data-v-92dc461c=""><svg data-v-92dc461c="" aria-hidden="true" focusable="false" data-prefix="fas" data-icon="dot-circle" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 512 512" class="has-text-grey-dark svg-inline--fa fa-dot-circle fa-w-16"><path data-v-92dc461c="" fill="currentColor" d="M256 8C119.033 8 8 119.033 8 256s111.033 248 248 248 248-111.033 248-248S392.967 8 256 8zm80 248c0 44.112-35.888 80-80 80s-80-35.888-80-80 35.888-80 80-80 80 35.888 80 80z" class=""></path></svg><span data-v-92dc461c="" class="li-points">Custom Domain, White labelled pages for your institute?</span></li></ul></div><div data-v-92dc461c="" class="has-text-centered in-service">Contact us - We are happy to help!</div></div></div></div><div data-v-0bd8bf35="" data-v-a7f45320="" class="is-hidden-print"><div data-v-0bd8bf35="" class="has-text-centered comment-box-title has-text-weight-semibold">Your valuable input will help us improve this site <br data-v-0bd8bf35=""> please give your comments. Thanks.</div><div data-v-0bd8bf35="" class="container"><div data-v-0bd8bf35="" class="columns is-mobile"><div data-v-0bd8bf35="" class="column is-10-mobile is-offset-1-mobile is-8-tablet is-offset-2-tablet is-6-desktop is-offset-3-desktop box has-text-centered comment-box has-text-weight-semibold"><div data-v-0bd8bf35="" class="other-languages"><a data-v-0bd8bf35="" class="is-link has-text-weight-bold">
            Click here
          </a>
          to see the languages currently supported.
        </div><div data-v-0bd8bf35="" class="what-next">Which language would you like to see next in JDoodle?</div><div data-v-0bd8bf35=""><div data-v-0bd8bf35="" class="columns"><div data-v-0bd8bf35="" class="column"><div data-v-0bd8bf35="" class="field has-addons"><div data-v-0bd8bf35="" class="control is-expanded"><input data-v-0bd8bf35="" data-vv-as="Language" name="language" type="text" maxlength="50" placeholder="New Language" class="input input" aria-required="true" aria-invalid="false"></div><div data-v-0bd8bf35="" class="control"><button data-v-0bd8bf35="" class="button has-text-weight-bold">
                    Add This
                  </button></div></div><div data-v-0bd8bf35=""><span data-v-0bd8bf35="" class="help is-danger" style="display: none;"></span></div></div></div><div data-v-0bd8bf35="" class="what-next what-next-thanks" style="display: none;">
            Thanks for your Input!
          </div><div data-v-0bd8bf35="" class="what-next what-next-thanks" style="display: none;">
             is already available at <a data-v-0bd8bf35="" href="https://www.jdoodle.com/online-compiler-c++14/"></a></div></div><div data-v-0bd8bf35="" class="what-next">Comments/Suggestions/Inputs...</div><div data-v-0bd8bf35="" class="columns"><div data-v-0bd8bf35="" class="column"><textarea data-v-0bd8bf35="" data-vv-as="Comment" name="comment" rows="6" class="textarea input" aria-required="true" aria-invalid="false"></textarea><span data-v-0bd8bf35="" class="help is-danger" style="display: none;"></span><div data-v-0bd8bf35="" class="is-size-7 note">For direct response, please include your email id in the comment <br data-v-0bd8bf35=""> or email to
              <a data-v-0bd8bf35="" href="mailto:jdoodle@nutpan.com">jdoodle@nutpan.com</a></div><button data-v-0bd8bf35="" type="button" class="button has-text-weight-bold">Post Comment
            </button></div></div><div data-v-0bd8bf35="" class="what-next what-next-thanks has-text-centered" style="display: none;">
          Thanks for your Input!
        </div></div></div></div></div></div></div><!----><footer data-v-3de20f4c="" class="footer has-text-weight-semibold is-hidden-print"><div data-v-3de20f4c="" class="contact-us">contact us at <a data-v-3de20f4c="" href="mailto:jdoodle@nutpan.com" id="contact-us">jdoodle@nutpan.com</a></div><div data-v-3de20f4c="" class="copyright">© 2013-2021 Nutpan pty Ltd. All Rights Reserved.</div><div data-v-3de20f4c="" class="twitterfollow"><a data-v-3de20f4c="" href="https://twitter.com/thenutpan" rel="nofollow" data-show-count="false" data-show-screen-name="false" class="twitter-follow-button">Follow @thenutpan</a></div><div data-v-3de20f4c=""><span data-v-3de20f4c="" class="text-info">JDoodle uses cookies</span>. Please read full <a data-v-3de20f4c="" href="https://www.jdoodle.com/terms">Terms of Use</a> before using this service.</div></footer></div><script>window.TogetherJSConfig_hubBase = 'https://tjhub.jdoodle.com/'
      window.ga=window.ga||function(){(ga.q=ga.q||[]).push(arguments)};ga.l=+new Date;
      ga('create', 'UA-42395517-1', 'auto');
      window.TogetherJSConfig_hubBase = 'https://tjhub.jdoodle.com/'</script><script async="" src="./Min_the_Max_diff_files/analytics.js.download"></script><script async="" src="./Min_the_Max_diff_files/togetherjs-min.js.download"></script><script src="./Min_the_Max_diff_files/chunk-vendors.a6d11d10.js.download"></script><script src="./Min_the_Max_diff_files/app.45892dd4.js.download"></script><script type="text/javascript" async="" src="./Min_the_Max_diff_files/ethicalads.min.js.download"></script><script type="text/javascript" async="" src="./Min_the_Max_diff_files/jdoodle.js.download"></script><script type="text/javascript" async="" src="./Min_the_Max_diff_files/ace.min.js.download"></script><script type="text/javascript" async="" src="./Min_the_Max_diff_files/ethicalads.min.js.download"></script><script type="text/javascript" async="" src="./Min_the_Max_diff_files/jdoodle.js(1).download"></script><script type="text/javascript" async="" src="./Min_the_Max_diff_files/ace.min.js.download"></script><script type="text/javascript" async="" src="./Min_the_Max_diff_files/ext-language_tools.js.download"></script><script type="text/javascript" async="" src="./Min_the_Max_diff_files/ext-static_highlight.js.download"></script><iframe src="./Min_the_Max_diff_files/syncframe.html" id="criteo-syncframe" style="display: none;"></iframe><iframe id="google_osd_static_frame_1908371693318" name="google_osd_static_frame" style="display: none; width: 0px; height: 0px;" src="./Min_the_Max_diff_files/saved_resource.html"></iframe></body><iframe sandbox="allow-scripts allow-same-origin" id="21e97ad4e813551" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./Min_the_Max_diff_files/sync.html">
    </iframe><iframe sandbox="allow-scripts allow-same-origin" id="223516601c462db" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./Min_the_Max_diff_files/pd.html">
    </iframe><iframe sandbox="allow-scripts allow-same-origin" id="237cc7994156871" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./Min_the_Max_diff_files/beacon.html">
    </iframe><iframe sandbox="allow-scripts allow-same-origin" id="24fab91166d1999" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./Min_the_Max_diff_files/usync.html">
    </iframe><iframe sandbox="allow-scripts allow-same-origin" id="256bb62fdb91c9f" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./Min_the_Max_diff_files/async_usersync.html">
    </iframe></html>