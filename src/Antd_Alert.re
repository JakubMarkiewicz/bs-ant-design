[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/alert";

[%bs.raw {|require("antd/lib/alert/style")|}];

[@bs.deriving jsConverter]
type alertType = [ | `success | `info | `warning | `error];

/*
 afterClose	Called when close animation is finished	() => void	-
 banner	Whether to show as banner	boolean	false
 closable	Whether Alert can be closed	boolean	-
 closeText	Close text to show	string|ReactNode	-
 description	Additional content of Alert	string|ReactNode	-
 iconType	Icon type, effective when showIcon is true	string	-
 message	Content of Alert	string|ReactNode	-
 showIcon	Whether to show icon	boolean	false, in banner mode default is true
 type	Type of Alert styles, options: success, info, warning, error	string	info, in banner mode default is warning
 onClose	Callback when Alert is closed	(e: MouseEvent) => void	-
    */

[@bs.obj]
external makeProps:
  (
    ~afterClose: unit => unit=?,
    ~banner: bool=?,
    ~closable: bool=?,
    ~closeText: ReasonReact.reactElement=?,
    ~description: ReasonReact.reactElement=?,
    ~iconType: string=?,
    ~message: ReasonReact.reactElement=?,
    ~showIcon: bool=?,
    ~_type: string=?,
    ~onClose: ReactEvent.Mouse.t => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~afterClose=?,
      ~banner=?,
      ~closable=?,
      ~closeText=?,
      ~description=?,
      ~iconType=?,
      ~message=?,
      ~showIcon=?,
      ~_type=?,
      ~onClose=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~afterClose?,
        ~banner?,
        ~closable?,
        ~closeText?,
        ~description?,
        ~iconType?,
        ~message?,
        ~showIcon?,
        ~_type=?Js.Option.map((. b) => alertTypeToJs(b), _type),
        ~onClose?,
        ~id?,
        ~className?,
        ~style?,
        (),
      ),
    children,
  );
