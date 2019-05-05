/* from bs-ant */

[@bs.obj]
external makePropsIconUnsafe:
  (
    ~_type: string,
    ~spin: string=?,
    ~rotate: float=?,
    ~onClick: unit => unit=?,
    ~onMouseUp: ReactEvent.Mouse.t => unit=?,
    ~onMouseDown: ReactEvent.Mouse.t => unit=?,
    ~onMouseEnter: ReactEvent.Mouse.t => unit=?,
    ~onMouseLeave: ReactEvent.Mouse.t => unit=?,
    ~onMouseMove: ReactEvent.Mouse.t => unit=?,
    ~onMouseOver: ReactEvent.Mouse.t => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

[@bs.module] external reactComponent: React.component('a) = "antd/lib/icon";

[@react.component]
let make =
    (
      ~_type: Antd_IconName.t,
      ~spin: option(string)=?,
      ~rotate: option(float)=?,
      ~onClick: option(unit => unit)=?,
      ~onMouseUp: option(ReactEvent.Mouse.t => unit)=?,
      ~onMouseDown: option(ReactEvent.Mouse.t => unit)=?,
      ~onMouseEnter: option(ReactEvent.Mouse.t => unit)=?,
      ~onMouseLeave: option(ReactEvent.Mouse.t => unit)=?,
      ~onMouseMove: option(ReactEvent.Mouse.t => unit)=?,
      ~onMouseOver: option(ReactEvent.Mouse.t => unit)=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsIconUnsafe(
      ~_type=Antd_IconName.toString(_type),
      ~spin?,
      ~rotate?,
      ~onClick?,
      ~onMouseUp?,
      ~onMouseDown?,
      ~onMouseEnter?,
      ~onMouseLeave?,
      ~onMouseMove?,
      ~onMouseOver?,
      ~id?,
      ~className?,
      ~style?,
      (),
    ),
  );