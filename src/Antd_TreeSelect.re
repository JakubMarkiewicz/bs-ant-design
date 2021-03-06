[@bs.module]
external reactClass: ReasonReact.reactClass = "antd/lib/tree-select";

[%bs.raw {|require("antd/lib/tree-select/style")|}];

[@bs.deriving jsConverter]
type size = [ | `large | `default | `small];

/* allowClear	Whether allow clear	boolean	false
   autoClearSearchValue	auto clear search input value when multiple select is selected/deselected	boolean	true
   defaultValue	To set the initial selected treeNode(s).	string|string[]	-
   disabled	Disabled or not	boolean	false
   dropdownClassName	className of dropdown menu	string	-
   dropdownMatchSelectWidth	Determine whether the dropdown menu and the select input are the same width. Default set min-width same as input.	boolean	true
   dropdownStyle	To set the style of the dropdown menu	object	-
   filterTreeNode	Whether to filter treeNodes by input value. The value of treeNodeFilterProp is used for filtering by default.	boolean|Function(inputValue: string, treeNode: TreeNode) (should return boolean)	Function
   getPopupContainer	To set the container of the dropdown menu. The default is to create a div element in body, you can reset it to the scrolling area and make a relative reposition. example	Function(triggerNode)	() => document.body
   labelInValue	whether to embed label in value, turn the format of value from string to {value: string, label: ReactNode, halfChecked: string[]}	boolean	false
   loadData	Load data asynchronously.	function(node)	-
   maxTagCount	Max tag count to show	number	-
   maxTagPlaceholder	Placeholder for not showing tags	ReactNode/function(omittedValues)	-
   multiple	Support multiple or not, will be true when enable treeCheckable.	boolean	false
   placeholder	Placeholder of the select input	string	-
   searchPlaceholder	Placeholder of the search input	string	-
   searchValue	work with onSearch to make search value controlled.	string	-
   showCheckedStrategy	The way show selected item in box. Default: just show child nodes. TreeSelect.SHOW_ALL: show all checked treeNodes (include parent treeNode). TreeSelect.SHOW_PARENT: show checked treeNodes (just show parent treeNode).	enum { TreeSelect.SHOW_ALL, TreeSelect.SHOW_PARENT, TreeSelect.SHOW_CHILD }	TreeSelect.SHOW_CHILD
   showSearch	Whether to display a search input in the dropdown menu(valid only in the single mode)	boolean	false
   size	To set the size of the select input, options: large small	string	'default'
   suffixIcon	The custom suffix icon	ReactNode	-
   treeCheckable	Whether to show checkbox on the treeNodes	boolean	false
   treeCheckStrictly	Whether to check nodes precisely (in the checkable mode), means parent and child nodes are not associated, and it will make labelInValue be true	boolean	false
   treeData	Data of the treeNodes, manual construction work is no longer needed if this property has been set(ensure the Uniqueness of each value)	array\<{ value, title, children, [disabled, disableCheckbox, selectable] }>	[]
   treeDataSimpleMode	Enable simple mode of treeData. Changes the treeData schema to: [{id:1, pId:0, value:'1', title:"test1",...},...] where pId is parent node's id). It is possible to replace the default id and pId keys by providing object to treeDataSimpleMode	false|Array\<{ id: string, pId: string, rootPId: null }>	false
   treeDefaultExpandAll	Whether to expand all treeNodes by default	boolean	false
   treeDefaultExpandedKeys	Default expanded treeNodes	string[]	-
   treeExpandedKeys	Set expanded keys	string[]	-
   treeNodeFilterProp	Will be used for filtering if filterTreeNode returns true	string	'value'
   treeNodeLabelProp	Will render as content of select	string	'title'
   value	To set the current selected treeNode(s).	string|string[]	-
   onChange	A callback function, can be executed when selected treeNodes or input value change	function(value, label, extra)	-
   onSearch	A callback function, can be executed when the search input changes.	function(value: string)	-
   onSelect	A callback function, can be executed when you select a treeNode.	function(value, node, extra)	-
   onTreeExpand	A callback function, can be executed when treeNode expanded	function(expandedKeys)	 */

[@bs.obj]
external makeProps:
  (
    ~allowClear: bool=?,
    ~autoClearSearchValue: bool=?,
    ~className: string=?,
    ~defaultValue: string=?, /* string | string[] */
    ~disabled: bool=?,
    ~dropdownClassName: string=?,
    ~dropdownMatchSelectWidth: bool=?,
    ~dropdownStyle: ReactDOMRe.Style.t=?,
    ~filterTreeNode: bool=?,
    ~labelInValue: bool=?,
    ~maxTagCount: int=?,
    ~maxTagPlaceholder: ReasonReact.reactElement=?,
    ~multiple: bool=?,
    ~placeholder: string=?,
    ~searchPlaceholder: string=?,
    ~searchValue: string=?,
    ~treeIcon: bool=?,
    ~showSearch: bool=?,
    ~size: string=?,
    ~suffixIcon: ReasonReact.reactElement=?,
    ~treeCheckable: bool=?,
    /* treeData */
    ~treeDefaultExpandAll: bool=?,
    ~treeDefaultExpandedKeys: list(string)=?,
    ~treeExpandedKeys: list(string)=?,
    ~treeNodeFilterProp: string=?,
    ~treeNodeLabelProp: string=?,
    ~value: string=?, /* string | string[] */
    ~onChange: (string, string) => unit=?,
    ~onSearch: string => unit=?,
    ~onSelect: (string, ReasonReact.reactElement) => unit=?,
    ~onTreeExpand: list(string) => unit=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~allowClear=?,
      ~autoClearSearchValue=?,
      ~className=?,
      ~defaultValue=?,
      ~disabled=?,
      ~dropdownClassName=?,
      ~dropdownMatchSelectWidth=?,
      ~dropdownStyle=?,
      ~filterTreeNode=?,
      ~labelInValue=?,
      ~maxTagCount=?,
      ~maxTagPlaceholder=?,
      ~multiple=?,
      ~placeholder=?,
      ~searchPlaceholder=?,
      ~searchValue=?,
      ~treeIcon=?,
      ~showSearch=?,
      ~size=?,
      ~suffixIcon=?,
      ~treeCheckable=?,
      /* treeData */
      ~treeDefaultExpandAll=?,
      ~treeDefaultExpandedKeys=?,
      ~treeExpandedKeys=?,
      ~treeNodeFilterProp=?,
      ~treeNodeLabelProp=?,
      ~value=?, /* string | string[] */
      ~onChange=?,
      ~onSearch=?,
      ~onSelect=?,
      ~onTreeExpand=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~allowClear?,
        ~autoClearSearchValue?,
        ~className?,
        ~defaultValue?,
        ~disabled?,
        ~dropdownClassName?,
        ~dropdownMatchSelectWidth?,
        ~dropdownStyle?,
        ~filterTreeNode?,
        ~labelInValue?,
        ~maxTagCount?,
        ~maxTagPlaceholder?,
        ~multiple?,
        ~placeholder?,
        ~searchPlaceholder?,
        ~searchValue?,
        ~treeIcon?,
        ~showSearch?,
        ~size=?Js.Option.map((. b) => sizeToJs(b), size),
        ~suffixIcon?,
        ~treeCheckable?,
        /* treeData */
        ~treeDefaultExpandAll?,
        ~treeDefaultExpandedKeys?,
        ~treeExpandedKeys?,
        ~treeNodeFilterProp?,
        ~treeNodeLabelProp?,
        ~value?, /* string | string[] */
        ~onChange?,
        ~onSearch?,
        ~onSelect?,
        ~onTreeExpand?,
        (),
      ),
    children,
  );

module TreeNode = {
  /* selectable	can be selected	boolean	true
     disableCheckbox	Disables the checkbox of the treeNode	boolean	false
     disabled	Disabled or not	boolean	false
     isLeaf	Leaf node or not	boolean	false
     key	Required property (unless using treeDataSimpleMode), should be unique in the tree	string	-
     title	Content showed on the treeNodes	string|ReactNode	'---'
     value	Will be treated as treeNodeFilterProp by default, should be unique in the tree	string	- */

  [@bs.module "antd/lib/tree-select"]
  external treeNode: ReasonReact.reactClass = "TreeNode";

  [@bs.obj]
  external makeProps:
    (
      ~className: string=?,
      ~selectable: bool=?,
      ~disableCheckbox: bool=?,
      ~disabled: bool=?,
      ~isLeaf: bool=?,
      ~key_: string,
      ~title: ReasonReact.reactElement=?,
      ~value: string,
      unit
    ) =>
    _ =
    "";

  let make =
      (
        ~className=?,
        ~selectable=?,
        ~disableCheckbox=?,
        ~disabled=?,
        ~isLeaf=?,
        ~key_,
        ~title=?,
        ~value,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=treeNode,
      ~props=
        makeProps(
          ~className?,
          ~selectable?,
          ~disableCheckbox?,
          ~disabled?,
          ~isLeaf?,
          ~key_,
          ~title?,
          ~value,
          (),
        ),
      children,
    );
};
