[@bs.module "antd/lib/radio"] external reactClass: ReasonReact.reactClass = "default";

[%bs.raw {|require("antd/lib/radio/style")|}];

[@bs.obj]
external makeProps:
  (
    ~autoFocus: bool=?,
    ~checked: bool=?,
    ~defaultChecked: bool=?,
    ~disabled: bool=?,
    ~value: string=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (~autoFocus=?, ~checked=?, ~defaultChecked=?, ~disabled=?, ~value=?, ~id=?, ~className=?, ~style=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=makeProps(~autoFocus?, ~checked?, ~defaultChecked?, ~disabled?, ~value?, ~id?, ~className?, ~style?, ()),
    children,
  );

module Group = {
  [@bs.module "antd/lib/radio"] external reactClass: ReasonReact.reactClass = "Group";
  [@bs.deriving jsConverter]
  type size = [ | `default | `small | `large];
  [@bs.obj]
  external makeProps:
    (
      ~defaultValue: string=?,
      ~disabled: bool=?,
      ~name: string=?,
      /* @todo: type me */
      ~options: 'a=?,
      ~size: string=?,
      ~value: string,
      ~onChange: ReactEvent.Form.t => unit=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~defaultValue=?,
        ~disabled=?,
        ~name=?,
        ~options=?,
        ~size=?,
        ~value,
        ~onChange=?,
        ~id=?,
        ~className=?,
        ~style=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~defaultValue?,
          ~disabled?,
          ~name?,
          ~options?,
          ~size=?Js.Option.map((. b) => sizeToJs(b), size),
          ~value,
          ~onChange?,
          ~id?,
          ~className?,
          ~style?,
          (),
        ),
      children,
    );
};

module Button = {
  [@bs.module "antd/lib/radio"]
  external reactClass: ReasonReact.reactClass = "Button";
  [@bs.obj]
  external makeProps:
    (
      ~prefixCls: string=?,
      ~className: string=?,
      ~defaultChecked: bool=?,
      ~checked: bool=?,
      ~style: ReactDOMRe.Style.t=?,
      ~disabled: bool=?,
      ~onChange: ReactEvent.Form.t => unit=?,
      ~onClick: ReactEvent.Mouse.t => unit=?,
      ~onMouseEnter: ReactEvent.Mouse.t => unit=?,
      ~onMouseLeave: ReactEvent.Mouse.t => unit=?,
      ~onKeyPress: ReactEvent.Keyboard.t => unit=?,
      ~onKeyDown: ReactEvent.Keyboard.t => unit=?,
      ~value: string=?,
      ~tabIndex: int=?,
      ~name: string=?,
      unit
    ) =>
    _ =
    "";

  let make =
      (
        ~prefixCls=?,
        ~className=?,
        ~defaultChecked=?,
        ~checked=?,
        ~style=?,
        ~disabled=?,
        ~onChange=?,
        ~onClick=?,
        ~onMouseEnter=?,
        ~onMouseLeave=?,
        ~onKeyPress=?,
        ~onKeyDown=?,
        ~value=?,
        ~tabIndex=?,
        ~name=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~prefixCls?,
          ~className?,
          ~defaultChecked?,
          ~checked?,
          ~style?,
          ~disabled?,
          ~onChange?,
          ~onClick?,
          ~onMouseEnter?,
          ~onMouseLeave?,
          ~onKeyPress?,
          ~onKeyDown?,
          ~value?,
          ~tabIndex?,
          ~name?,
          (),
        ),
      children,
    );
};
