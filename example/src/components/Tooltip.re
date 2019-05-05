open Antd;

let str = React.string;

[@react.component]
let make = () =>
  <Section name="Tooltip">
    <div>
      <Tooltip title={"prompt text" |> str}>
        <span> {"Tooltip will show on mouse enter." |> str} </span>
      </Tooltip>
    </div>
    <div>
      <Tooltip title={"Prompt Text" |> str}>
        <Button> {"Align edge / 边缘对齐" |> str} </Button>
      </Tooltip>
    </div>
  </Section>;