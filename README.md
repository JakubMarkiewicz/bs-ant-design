# DEPRECATED
The most up to date version is [HERE](https://github.com/Enalmada/bs-ant-design)


# bs-ant-design-alt

## Introduction

** See forked repo for details.  This repo is a staging area for me to test out components not in original bs-ant-design before doing a pull request.
I am new to reason-react and these are my first bindings. Many have incorrect types for parameters (especially callbacks) I don't happen to be using yet.  
I will fix them up before pull request to parent repo. **

Bucklescript + ReasonReact binding for [Ant Design](https://ant.design) components. I write bindings when I needed them in my projects. If you find a component is missing, it's because I don't need it (yet).

Difference from [bs-antd](https://github.com/tiensonqin/bs-antd) : It uses the official recommended way for writing bindings and it doesn't work for me. I explained this in this [blog post](https://khoanguyen.me/writing-reason-react-bindings-the-right-way/)

I also attempted to rewrite the components when possible for a better integration.

## Installation

* With npm:

```
npm install --save bs-ant-design-alt
```

* With yarn:

```
yarn add bs-ant-design-alt
```

* Add `bs-ant-design-alt` to `bs-dependencies` in `bsconfig.json`.
* You also need to set up your bundler to handle less files (This is a requirement from ant-design)

For webpack, you can do this:

```
npm install --save-dev less@^2.7.3 less-loader css-loader style-loader
```

(`less@^2.7.3` is the important bit)

Now add this to your webpack config:

```js
// webpack.config.js
module.exports = {
    ...
    module: {
        rules: [{
        test: /\.less$/,
        use: ["style-loader", "css-loader", "less-loader"]
    }]
}
};
```

## Usage

Please check [ant design's documentation for each component](https://ant.design/docs/react/introduce).

I tried to keep the API as close to the original JS API as possible.

Some common patterns I used:

* string enums -> polymorphic variants
* function argument accepts different types: GDATs or `%identity` hack.

## Components

Almost all of them are done, some completely, some superficially with params I needed. 
Refer to src for specifics.

## Contributions

All contributions are welcomed.  I intend to merge and release quickly.

## LICENSE

MIT
